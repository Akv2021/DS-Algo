// Binary tree and its properties using recursion.
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
           this->data = data;
           left = NULL;
           right = NULL;
        }
};

class myPair{
    public: 
        int height;
        int diameter;
}


node* buildTree(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    
    // Preorder building/traversal
    node* n = new node(data);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreorder(node* root){
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printLevel(node*root, int level){
    if(root==NULL){
        return;
    }
    
    if(level ==0){
        cout<<root->data<<" ";
    }
    
    printLevel(root->right, level-1);
    printLevel(root->left, level-1);
}

void printInorder(node* root){
    if(root==NULL){
        return;
    }
    
    
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
    
}

void printPostOrder(node* root){
    if(root==NULL){
        return;
    }
    
    
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}

int height(node* root){
    if(root==NULL){
        return 0;
    }
    
    int heightOfTree = 1 + max(height(root->left),height(root->right));
    return heightOfTree;
}

void levelOrderRecursion(node* root){
    
    int min_level;
    int max_level = height(root);
    
    for(int depth = min_level; depth<= max_level; depth++){
        printLevel(root, depth);
        cout<<endl;
    }
}

int countNodes(node* root){

    if(root==NULL){
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

//Replace every node with the sum of nodes + node_data
int replaceWithSum(node* root){
    if(root==NULL){
        return 0;
    }
    
    int leftSum = replaceWithSum(root->left);
    int rightSum = replaceWithSum(root->right);
    root->data += leftSum + rightSum;
    return root->data;
    
}

int replaceWithChildSum(node* root){
    
    if(root==NULL){
        return 0;
    }
    
    //Node is leaf
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }
    
    int leftSum = replaceWithSum(root->left);
    int rightSum = replaceWithSum(root->right);
    int temp = root->data;
    root->data = leftSum + rightSum;
    return root->data + temp;
}




int main() {
    
    node* root = NULL;
    root = buildTree();
    printPreorder(root);
    cout<<endl;
    printLevel(root, 1);
    cout<<endl;
    cout<<countNodes(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl<<"-----------"<<endl;
    levelOrderRecursion(root);
    cout<<endl<<"-----------"<<endl;
    printPreorder(root);
    cout<<endl<<"-----------"<<endl;
    printPostOrder(root);
    cout<<endl<<"-----------"<<endl;
    cout<<replaceWithSum(root);
    return 0;
}
