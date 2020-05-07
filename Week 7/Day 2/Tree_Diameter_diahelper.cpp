#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>

using namespace std;
class diahelper{
    public:
        int d;
        int ht;
};

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

diahelper diameter(BinaryTreeNode<int>* root){
    if(root == NULL){
        diahelper ans;
        ans.d=0;
        ans.ht=0;
        return ans;
    }
    diahelper lans = diameter(root->left);
    diahelper rans = diameter(root->right);
    diahelper ans;
    ans.d = max(lans.ht+rans.ht , max(lans.d, rans.d));
    ans.ht = 1 + max(lans.ht, rans.ht);
    return ans;
}



int main(){
  BinaryTreeNode<int>* root = takeInputLevelWise();
	printTree(root);
    diahelper ans = diameter(root);
    cout<<endl;
    cout<<"Diameter: "<< ans.d;
    cout<<"\nHeight: "<< ans.ht;


	cout << endl;
  
}
