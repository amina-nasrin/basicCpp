#include <iostream>
#include <queue>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* CreateNode(int data){
	Node* newNode = new Node();
	/**if (!newNode) {
		cout << "Memory error\n";
		return NULL;
	}**/
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* InsertNode(Node* root, int data){
	if (root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
		return root;
	}

	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {
		Node* temp;
        temp = q.front();
		q.pop();
	
		if (temp->left != NULL)
			q.push(temp->left);
		else {
			temp->left = new Node();
			root->data = data;
			root->left = root->right = NULL;
			return root;
		}

		if (temp->right != NULL)
			q.push(temp->right);
		else {
			temp->right = new Node();
			root->data = data;
			root->right = root->right = NULL;
			return root;
		}
	} return root;
}



void inorder(Node* temp)
{
	if (temp == NULL)
		return;

	inorder(temp->left);
	cout << temp->data << ' ';
	inorder(temp->right);
}

// Driver code
int main(){
	Node* root = CreateNode(10);
	root->left = CreateNode(11);
	root->left->left = CreateNode(7);
	root->right = CreateNode(9);
	root->right->left = CreateNode(15);
	root->right->right = CreateNode(8);

	cout << "Inorder traversal before insertion: ";
	inorder(root);
	cout << endl;

	int key = 12;
	root = InsertNode(root, key);

	cout << "Inorder traversal after insertion: ";
	inorder(root);
	cout << endl;

	return 0;
}
