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

int isFull(node *root){
    if(root == NULL)    return 0;
    if(root -> left == NULL && root -> right == NULL)   return 1;
    if(!(root->left != NULL && root->right != NULL)){
        return 0;
    }
    return isFull(root->left) && isFull(root->right);
}

int main(){
    int t;       cin >> t;
    while(t--){
        int n;      cin >> n;
        is_perfect = 1;
        node *root = NULL;
        while(n--){
            int u,v;
            char c;
            cin >> u >> v >> c;
            if(root == NULL){
                root = new node(u);
                make_node(root, u, v, c);
            }
            else     insert(root, u, v, c);
        }
        cout << isFull(root) << '\n';
    }
}