#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool is_perfect;

struct node{
    int data;
    node *left, *right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void make_node(node *root, int u, int v, char c){
    if(c == 'L')     root->left = new node(v);
    else    root->right = new node(v);
}

void insert(node *root, int u, int v, char c){
    if(root == NULL)    return;
    if(root->data == u)     make_node(root, u, v, c);
    else{
        insert(root->left, u, v, c);
        insert(root->right, u, v, c);
    }
}

int isEqual(node *A, node *B){
    if(A == NULL && B == NULL)    return 1;
    if(A != NULL && B != NULL && A->data == B->data){
        return isEqual(A->left, B->left) && isEqual(A->right, B->right);
    }
    return 0;
}

int main(){
    int t;       cin >> t;
    while(t--){
        int n;      cin >> n;
        node *A = NULL;
        node *B = NULL;
        while(n--){
            int u,v;
            char c;
            cin >> u >> v >> c;
            if(A == NULL){
                A = new node(u);
                make_node(A, u, v, c);
            }
            else     insert(A, u, v, c);
        }

        int m;    cin >> m;
        while(m--){
            int u,v;
            char c;
            cin >> u >> v >> c;
            if(B == NULL){
                B = new node(u);
                make_node(B,u,v,c);
            }
            else     insert(B,u,v,c);
        }
        
        cout << isEqual(A,B) << '\n';
    }
}