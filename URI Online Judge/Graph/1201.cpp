#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node* parent;
};

Node* GetNewRoot(int data){
    Node* newRoot = new Node();
    newRoot -> data = data;
    newRoot -> left = NULL;
    newRoot -> right = NULL;
    return newRoot;
}
Node* Insert(Node* root, int data){
    if(root == NULL){
        root = GetNewRoot(data);
        return root;
    }else if(data <= root->data)
        root->left = Insert(root->left,data);
    else
        root->right = Insert(root->right,data);

    return root;
}
Node* search(Node* root, int data){
    if(root == NULL)
        return NULL;
    if(root->data == data)
        return root;
    else if(data <= root->data)
        return search(root->left,data);
    else
        return search(root->right,data);
}

void PrintPreOder(struct Node* root,int &i, int panjang){
    if(root ==  NULL)
        return;
    cout<<(root->data);
    i++;
    if(i != panjang)
        cout<<" ";
    PrintPreOder(root -> left,i,panjang);
    PrintPreOder(root -> right,i,panjang);
}

void PrintInOrder(struct Node* root,int &i, int panjang){
    if(root == NULL)
        return;
    PrintInOrder(root -> left,i,panjang);
    cout<<(root->data);
    i++;
    if(i != panjang)
        cout<<" ";
    PrintInOrder(root -> right,i,panjang);
}

void PrintPosOrder(struct Node* root,int &i, int panjang){
    if(root == NULL)
        return;
    PrintPosOrder(root -> left,i,panjang);
    PrintPosOrder(root -> right,i,panjang);
    cout<<(root->data);
    i++;
    if(i != panjang)
        cout<<" ";
}
Node* minValueNode(Node* root){
    while(root->left != NULL)
        root = root->left;
    return root;
}
Node* maxValueNode(Node* root){
    while(root->right != NULL)
        root = root->right;
    return root;
}

Node* deleteBST(Node* root,int data){
    if(root == NULL)
        return root;
    if(data < root->data)
        root->left = deleteBST(root->left,data);
    else if(data > root->data)
        root->right = deleteBST(root->right,data);
    else{
        if(root->left == NULL){
            Node* tmp = root->right;
            root = NULL;
            return tmp;
        }else if(root->right == NULL){
            Node* tmp = root->left;
            root = NULL;
            return tmp;
        }
        Node* tmp = maxValueNode(root->left);
        root->data = tmp->data;
        root->left = deleteBST(root->left,tmp->data);
    }
    return root;
}

int main()
{
    string x;
    long panjang =0;
    Node* root = NULL;
    while(cin>>x){
        int y;
        int i =0;
        if(x.length() <= 1)
            cin>>y;
        if(x == "I"){
            if(search(root,y) == NULL)
                panjang++;
            root = Insert(root,y);
        }
        if(x == "P")
            if(search(root,y) != NULL)
                cout<<y<<" existe"<<endl;
            else
                cout<<y<<" nao existe"<<endl;
        if(x == "INFIXA"){
            PrintInOrder(root,i,panjang);
            cout<<endl;
        }
        if(x == "PREFIXA"){
            PrintPreOder(root,i,panjang);
            cout<<endl;
        }
        if(x == "POSFIXA"){
            PrintPosOrder(root,i,panjang);
            cout<<endl;
        }
        if(x == "R"){
            if(search(root,y) != NULL)
                panjang--;
            root = deleteBST(root,y);
        }

    }
    return 0;
}