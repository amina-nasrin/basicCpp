#include <iostream>
using namespace std;

class BinarySearchTree {
	int data;
	BinarySearchTree *left, *right;

    public:
	BinarySearchTree(): data(0), left(NULL), right(NULL){

    }

	BinarySearchTree(int value){
	   data = value;
	   left = right = NULL;
    }

	BinarySearchTree* Insert(BinarySearchTree* root, int value){
	    if (root==NULL) {
		    return new BinarySearchTree(value);
	    }

	    if (value > root->data) {
		    root->right = Insert(root->right, value);
	    }
    	else {
	    	root->left = Insert(root->left, value);
    	}

    	return root;
    }

	void Inorder(BinarySearchTree* root){
    	if (root == NULL) {
	    	return;
	    }
	
        Inorder(root->left);
	    cout <<root->data << endl;
	    Inorder(root->right);
    }
};

int main(){

	BinarySearchTree b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);

	b.Inorder(root);
	return 0;
}
