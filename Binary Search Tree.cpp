#include<iostream>
using namespace std;

class BinarySearchTree{
    int data;
    BinarySearchTree* leftChild;
    BinarySearchTree* rightChild;

    public:

    BinarySearchTree(): data(0), leftChild(NULL), rightChild(NULL){

    }

    BinarySearchTree(int x){
            data = x;

            leftChild = NULL;
            rightChild = NULL;        
    }

    BinarySearchTree* insert(BinarySearchTree* root, int data){
        if(root == NULL)
            return new BinarySearchTree(data);
        if(data> root->data)
            root->rightChild = insert(rightChild, data);
        else root->leftChild = insert(leftChild, data);
    
        return root;
    }

    void print(BinarySearchTree* root){
        if(root == NULL)
            return;
        print(root->leftChild);
        cout<<root->data<<endl;
        print(root->rightChild);
    }   
};

int main(){
    BinarySearchTree b;
    BinarySearchTree* root;
    root = NULL;

    root = b.insert(root, 100);
    b.insert(root, 80);
    b.insert(root, 1000);

    b.print(root);

    return 0;

}