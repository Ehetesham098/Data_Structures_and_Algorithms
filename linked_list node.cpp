#include<bits/stdc++.h>

using namespace std;



struct Node{
	
	int data;
	struct Node* next;
	
};






//traversal of a linked list.

void print_list(Node* head)
{
	Node* ptr=head;
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"-->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}













//insert at beggining of a linked list
Node* insert_beg(Node* head,int item)
{
	Node* temp= new Node();
	
	temp->data = item;
	temp->next = head;
	head=temp;
	
	return head;
	
}















//insert at end of a linked list
void insert_end(Node *head, int item)
{
	Node *temp=head;
	
	//iterte to end of this list
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	temp->next = new Node();
	temp->next->data = item;
	temp->next->next = NULL;
	
}






// insert at a position n
// for position greater than or equal to 2
// Home work to change it to work for positions 0,1 as well.
Node* insert_at_pos(Node* head,int item,int pos)
{
	pos--;
	
	Node* ptr=head, *temp;
	
	while(pos!=1&&ptr!=NULL)
	{
		ptr=ptr->next;
		pos--;
	}
	
	temp= new Node();
	temp->data=item;
	temp->next = ptr->next;
	ptr->next=temp;

	
	return head;
	
	
}





//delete last elemnt 
// for list having size greater than  2
// Home work to change it to work for all sizes.
Node * delete_last(Node* head)
{
	Node* ptr=head;
	
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	
	delete(ptr->next);
	ptr->next=NULL;	
	
}


//search in a linked list
//Home work change it to also print the position of element if found 
void search(Node* head,int item)
{
	Node* ptr=head;
	
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
			cout<<item<<" found"<<endl;
			return;
		}
		ptr=ptr->next;
	}
	
	cout<<item<<" not found"<<endl;
}






int main()
{
	Node* head = new Node();
	
	
	head->data=1;
	head->next=NULL;
	
	head->next = new Node();
	head->next->data=2;
	head->next->next=NULL;
	
	head->next->next=new Node();
	head->next->next->data=3;
	head->next->next->next=NULL;
	
	head->next->next->next = new Node();
	head->next->next->next->data=4;
	head->next->next->next->next=NULL;

//	cout<<head->next->data<<endl;	
	
	
//	print_list(head); // traversal in a linked list 
	
	
	
	insert_end(head,5);
//	insert_end(head,6);
//	insert_end(head,7);
	
//	print_list(head);
	
	
	
	
	
	
	head = insert_beg(head,0);
	head = insert_beg(head,2);
	
//	print_list(head);







	insert_at_pos(head,20,4);
//	insert_at_pos(head,30,5);
//	insert_at_pos(head,70,4);


	
//	print_list(head);
	
	
	
	delete_last(head);
	delete_last(head);
	
	print_list(head);
	
	// WAP to delete an element at Nth position in liked list.(Home work)
	// WAP to delete head node in liked list.(Home work)
	
	search(head,20);
	search(head,45);
	



}
