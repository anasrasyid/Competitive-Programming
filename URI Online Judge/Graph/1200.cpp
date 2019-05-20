#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

Node* GetNewRoot(char data){
    Node* newRoot = new Node();
    newRoot -> data = data;
    newRoot -> left = NULL;
    newRoot -> right = NULL;
    return newRoot;
}

Node* Insert(Node* root, char data){
    if(root == NULL){
        root = GetNewRoot(data);
        return root;
    }else if(data <= root->data){
        root->left = Insert(root->left,data);
    }else{ 
        root->right = Insert(root->right,data);
    }
    return root;
}
bool search(Node* root, char data){
    if(root == NULL)
        return false;
    if(root->data == data)
        return true;
    else if(data <= root->data)
        return search(root->left,data);
    else
        return search(root->right,data);
}

void PrintPreOder(struct Node* root,string &s){
    if(root ==  NULL)
        return;
    s = s + (root->data);
    PrintPreOder(root -> left,s);
    PrintPreOder(root -> right,s);
}

void PrintInOrder(struct Node* root,string &s){
    if(root == NULL)
        return;
    PrintInOrder(root -> left,s);
    s =s+(root->data);
    PrintInOrder(root -> right,s);
}

void PrintPosOrder(struct Node* root,string &s){
    if(root == NULL)
        return;
    PrintPosOrder(root -> left,s);
    PrintPosOrder(root -> right,s);
    s=s+(root->data);
}

int main()
{
    string x;
    Node* root = NULL;
    while(cin>>x){
        char y;
        if(x.length() <= 1)
            cin>>y;
        if(x == "I")
            root = Insert(root,y);
        if(x == "P")
            if(search(root,y))
                cout<<y<<" existe"<<endl;
            else
                cout<<y<<" nao existe"<<endl;
        string s ="";
        if(x == "INFIXA"){
            PrintInOrder(root,s);
            for(long j = 0; j < s.length(); j++){
                cout<<s[j];
                if(j != s.length() - 1)
                    cout<<" ";
            }
            cout<<endl;
        }
        if(x == "PREFIXA"){
            PrintPreOder(root,s);
            for(long j = 0; j < s.length(); j++){
                cout<<s[j];
                if(j != s.length() - 1)
                    cout<<" ";
            }
            cout<<endl;
        }
        if(x == "POSFIXA"){
            PrintPosOrder(root,s);
            for(long j = 0; j < s.length(); j++){
                cout<<s[j];
                if(j != s.length() - 1)
                    cout<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
