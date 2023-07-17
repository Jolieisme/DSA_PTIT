#include <bits/stdc++.h>
using namespace std;
struct Node{
    char data;
    Node *right, *left;
    Node (char x){
        data = x;
        left = right = NULL;
    }
};

void inorder(Node *root){
    if(root == NULL)    return;
    inorder(root->left);
    cout << root->data;   // gia tri cua nut hiện tại
    inorder(root->right);
}

int main(){
    int t;      cin >> t;
    while(t--){
        string s;      cin >> s;
        int res = 0;
        stack <Node*> st;
        Node* root = NULL;
        for(int i = 0; i< s.size(); i++){
            if(!isdigit(s[i])){
                root = new Node(s[i]);
                root->right = st.top();
                st.pop();
                root->left = st.top();
                st.pop();
                if(s[i] == '+')    res += ((int)root->right + (int)root->left);
                else if(s[i] == '-')   res -= ((int)root->right - (int)root->left)

                st.push(root);
            }
            else     st.push(new Node(s[i]));
        }
        inorder(root);
        cout << '\n';
    }
}