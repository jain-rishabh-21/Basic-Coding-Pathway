#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>

using namespace std;
template <typename T>
class BinaryTreeNode {
	public:
	T data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(T data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};
void printTree(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	if (root->left != NULL) {
		cout << "L" << root->left->data;
	}

	if (root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}
BinaryTreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}

BinaryTreeNode<int>* LCA(BinaryTreeNode<int>* root, int n1, int n2){
    if(root == NULL)   
        return NULL;


if(root->data == n1 || root->data == n2){
    return root;
}
    BinaryTreeNode<int>* leftans = LCA(root->left, n1, n2);
    BinaryTreeNode<int>* rightans = LCA(root->right, n1, n2);
    if(leftans!=NULL && rightans!=NULL){
        return root;
    }
    if(leftans==NULL){
        return rightans;
    }
    else 
        return leftans;
}


int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
	printTree(root);
    int n1,n2;
    cout<<"LCA of: ";
    cin>>n1>>n2;
    BinaryTreeNode<int>* ans = LCA(root, n1,n2);
    cout<<ans->data;
}
