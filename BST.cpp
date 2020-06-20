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
	
	return temp;
}

void inorder(Node* root)
{
	if(root==NULL)
		return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);	
	
	
}

void postorder(Node* root)
{
	if(root==NULL)
		return;
	
	postorder(root->left);
	postorder(root->right);	
	cout<<root->data<<" ";
	
	
}


void preorder(Node* root)
{
	if(root==NULL)
		return;
	
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);	
	
	
}







Node* search(struct Node* root, int item) 
{ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->data == item) 
       return root; 
     
    // Key is greater than root's key 
    if (root->data < item) 
       return search(root->right, item); 
  
    // Key is smaller than root's key 
    return search(root->left, item); 
} 











Node* insert(struct Node* Node, int item) 
{ 
    /* If the tree is empty, return a new Node */
    if (Node == NULL) 
	return createnode(item); 
  
    /* Otherwise, recur down the tree */
    if (item < Node->data) 
        Node->left  = insert(Node->left, item); 
    else if (item > Node->data) 
        Node->right = insert(Node->right, item);    
  
    /* return the (unchanged) Node pointer */
    return Node; 
} 










//summation of all node in a tree
int summation(Node* root) 
{ 
    if (root == NULL) 
        return 0; 
        
    return (root->data + summation(root->left) + summation(root->right)); 
} 





//level order traversal in a tree
void levelorder(Node* root)
{
	queue <Node*> Q;
	
	if(root==NULL)
	{
		cout<<"Empty Tree"<<endl;
		return;
	}
	
	Q.push(root);
	
	while(!Q.empty())
	{
		Node* temp;
		temp = Q.front();
		Q.pop();
		
		cout<<temp->data<<" ";
		
		if(temp->left)
			Q.push(temp->left);
		
		if(temp->right)
			Q.push(temp->right);
	}
	
}


int main()
{
	Node* root=createnode(10);
	
	root->left=createnode(8);
	root->right=createnode(15);
	
	root->left->left=  createnode(6);
	root->left->right= createnode(9);
	
	root->right->right= createnode(20);
	
	root->left->left->left=  createnode(5);
	root->left->left->right= createnode(7);
	
	root->right->right->right= createnode(30);
	
	//traversals in a binary tree
	
//	inorder(root);
//	cout<<endl;
//	
//	preorder(root);
//	cout<<endl;
//	
//	postorder(root);
//	cout<<endl;
	
//	Node* temp;
//	
//	if(temp=search(root,22))
//	cout<<"found"<<endl;
//	else
//	cout<<"not found"<<endl;


	insert(root,13);

	inorder(root);
	cout<<endl;

	cout<<"sum of all the nodes in tree is "<<summation(root)<<endl;
	
	levelorder(root);
	
}
