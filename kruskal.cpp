#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct edge{
    int u,v,w;
};

int n, m;
int parent[1005], sz[1005];
vector <edge> c;
void make_set(){
    for(int i = 1; i<=n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u){
    if(u == parent[u])    return u;
    return   parent[u] = Find(parent[u]);
}

bool Union(int a, int b){
    a = Find(a);
    b = Find(b);
    if(a == b)  return 0; //khong the gop a, b voi nhau
    if(sz[a] < sz[b])    swap(a,b);
    parent[b] = a;
    sz[a] += sz[b];
    return 1;
}

bool cmp(edge a, edge b){
    return a.w < b.w;
}

void kruskal(){
    vector <edge> res;    // tao cay khung cuc tieu rong
    int d = 0; 
    sort(c.begin(), c.end(), cmp);
    for(int i = 0; i<m; i++){
        if(res.size() == n-1)    break;
        edge e = c[i];   // chon canh e la canh nho nhat
        if(Union(e.u, e.v)){
            res.push_back(e);
            d += e.w;
        }

    }
    if(res.size() != n-1)    cout << "khong ton tai cay khung" << "\n";
    else{
        cout << d << "\n";
    }
}
int main(){
    int t;    cin >> t;
    while(t--){
        c.clear();
        cin >> n >> m;
        for(int i = 0; i<m;i++){
            int x,y,z;     cin >> x >> y >> z;
            edge e;
            e.u = x,
            e.v = y;
            e.w = z;
            c.push_back(e);
        }
        make_set();
        kruskal();
    }
}