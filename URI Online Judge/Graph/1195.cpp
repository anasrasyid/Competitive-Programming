#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* GetNewRoot(int data){
    Node* newroot = new Node();
    newroot -> data = data;
    newroot -> left = NULL;
    newroot -> right = NULL;
    return newroot;
}

Node* Insert(Node* root, int data){
    if(root == NULL){
        root = GetNewRoot(data);
        return root;
    }else if(data <= root -> data ){
        root -> left = Insert(root -> left ,data);
    }else{ 
        root -> right = Insert(root -> right,data);
    }
    return root;
}
void printPreOrder(struct Node* root) 
{ 
  	if (root == NULL) 
  		return;
  	printf(" %i", root -> data);
  	printPreOrder (root -> left); 
  	printPreOrder (root -> right); 
}

void printInOrder(struct Node* root) 
{ 
  	if (root == NULL) 
  		return;
  	printInOrder (root -> left); 
  	cout<<" "<<(root -> data);
  	printInOrder (root -> right); 
}

void printPosOrder(struct Node* root) 
{ 
  	if (root == NULL) 
  		return;
  	printPosOrder (root -> left); 
  	printPosOrder (root -> right);
  	cout<<" "<<(root -> data);  
}

int main(){
    int c,n,x;
    int count = 1;
    cin>>c;
    for(int i = 0; i < c; ++i){
        Node* root = NULL;
        cin>>n;
        for(int j =0;j<n;++j){
            cin>>x;
            root = Insert(root,x);
        }
        cout<<"Case "<<count<<":"<<endl;
        cout<<"Pre.:";
        printPreOrder(root);
        cout<<endl;
        cout<<"In..:";
        printInOrder(root);
        cout<<endl;
        cout<<"Post:";
        printPosOrder(root);
        cout<<endl;

        count++;
        cout<<endl;
    }
    
}