#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
    int data;
    node *left, *right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void make_node(node* root, int u, int v, char c){
    if(c == 'L')     root->left = new node(v);
    else    root->right = new node(v);
}

void insert_node(node *root, int u, int v, char c){
    if(root == NULL)    return;
    if(root->data == u)     make_node(root, u, v, c);
    else{
        insert_node(root->left,u,v,c);
        insert_node(root->right,u,v,c);
    }
}

void level_order(node *root){
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node *tmp = q.front();
        q.pop();
        cout << tmp->data << " ";
        if(tmp->left != NULL)    q.push(tmp->left);
        if(tmp->right != NULL)   q.push(tmp->right);
    }
}

int main(){
    int t;       cin >> t;
    while(t--){
        int n;      cin >> n;
        node *root = NULL;
        while(n--){
            int u,v;
            char c;
            cin >> u >> v >> c;
            if(root == NULL){
                root = new node(u);
                make_node(root,u,v,c);
            }
            else    insert_node(root,u,v,c);    
        }
        level_order(root);
        cout << "\n";
    }
}