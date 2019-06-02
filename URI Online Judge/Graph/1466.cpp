#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node{
    ll info;
    Node* left;
    Node* right;
};

Node* createNode(ll x){
    Node* p = new Node();
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

Node* insert(Node* root,ll x){
    if(root == NULL){
        return createNode(x);
    }else if(x < root->info)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right,x);
    return root;
}

void levelOrder(Node* root){
    queue<Node*> cek;
    vector<ll> path;
    cek.push(root);
    while (cek.size() > 0){
        path.push_back(cek.front()->info);
        Node* P = cek.front();
        cek.pop();
        if(P != NULL){
            if(P -> left != NULL)
                cek.push(P -> left );
            if(P -> right != NULL)
                cek.push(P -> right);
        }
    }
    for(ll i = 0; i < path.size(); i++)
        if(i != path.size() - 1)
            cout << path[i] << " ";
        else
            cout << path[i] << endl;
}

int main(){
    ll t;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        ll n;
        Node* root = NULL;
        cin >> n;
        for(ll j = 0; j < n; j++){
            ll x;
            cin >> x;
            root = insert(root, x);
        }
        cout << "Case " << i << ":" << endl;
        levelOrder(root);
        cout << endl;
    }
    return 0;
}