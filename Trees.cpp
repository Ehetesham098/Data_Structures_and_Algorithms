#include<bits/stdc++.h>


using namespace std;

struct Node{
	
	int data;
	Node* left;
	Node* right;

};



Node* createnode (int item)
{
	Node* temp = new Node();
	
	temp->data=item;
	temp->left=NULL;
	temp->right=NULL;
}

void inorder(Node* head)
{
	if(head==NULL)
		return;
	
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);	
	
	
}

void postorder(Node* head)
{
	if(head==NULL)
		return;
	
	postorder(head->left);
	postorder(head->right);	
	cout<<head->data<<" ";
	
	
}









void preorder(Node* head)
{
	if(head==NULL)
		return;
	
	cout<<head->data<<" ";
	preorder(head->left);
	preorder(head->right);	
	
	
}



int main()
{
	Node* head=createnode(1);
	
	head->left=createnode(2);
	head->right=createnode(3);
	
	head->left->left=  createnode(4);
	head->left->right= createnode(5);
	
	head->right->left=  createnode(6);
	head->right->right= createnode(7);
	
	head->left->left->left=  createnode(8);
	head->left->right->left= createnode(9);
	
	//traversals in a binary tree
	
	inorder(head);
	cout<<endl;
	
	preorder(head);
	cout<<endl;
	
	postorder(head);
	cout<<endl;
	
}
