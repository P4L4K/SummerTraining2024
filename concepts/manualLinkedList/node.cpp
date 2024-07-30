#include<iostream>
using namespace std;
class Node
{
	public:
	int value;
	Node *next;
	Node(int data)
	{
		value=data;
		next=NULL;
	}
};
void insertAtFirst(Node * &head,int value)
{
	Node *newNode =new Node(value);
	newNode->next=head;
	head=newNode;
}
void insertAtEnd(Node * &head,int value)
{
	Node *tempNode;
	tempNode=head;
	while(tempNode->next != NULL)
	{
		tempNode=tempNode->next;
	}
	Node *newNode =new Node(value);
	tempNode->next=newNode;
}
void insertAtK(Node * &head,int k,int value)
{
	Node *tempNode;
	tempNode=head;
	while( k>2 & tempNode->next!=NULL)
	{
		k--;
		tempNode=tempNode->next;
		
	}
	Node *newNode =new Node(value);
	Node *tempNode2=tempNode->next;
	newNode->next=tempNode2;
	tempNode->next=newNode;
}
void display(Node * head)
{
	cout<<"Displaying the list: ";
	Node *tempNode;
	tempNode=head;
	while(tempNode!= NULL)
	{
		cout<<tempNode->value<<" ";
		tempNode=tempNode->next;
	}
	cout<<endl;
}
void displayEven(Node * head)
{
	cout<<"Displaying the Even list: ";
	Node *tempNode;
	tempNode=head;
	while(tempNode!= NULL)
	{
		if(tempNode->value %2==0){
			cout<<tempNode->value<<" ";
		}
		tempNode=tempNode->next;
	}
	cout<<endl;
}
void displayodd(Node * head)
{
	cout<<"Displaying the Odd list: ";
	Node *tempNode;
	tempNode=head;
	while(tempNode!= NULL)
	{
		if(tempNode->value %2!=0){
			cout<<tempNode->value<<" ";
		}
		tempNode=tempNode->next;
	}
	cout<<endl;
}
void deleteNode(Node *node)
{
	node->value=node->next->value;
	node->next=node->next->next;
}

/*
int main()
{
	Node *head= new Node(10);
	insertAtEnd(head,13);
	insertAtEnd(head,14);
	insertAtEnd(head,16);
	insertAtEnd(head,18);
	insertAtEnd(head,20);
	
	display(head);
	displayEven(head);
	displayodd(head);	
	
	display(head);
	//adding node to back
	cout<<"\nAFTER INSERTION at END "<<endl;
	insertAtEnd(head,30);
	insertAtEnd(head,40);
	display(head);
	//adding node to front
	cout<<"\nAFTER INSERTION at FRONT "<<endl;
	insertAtFirst(head,10);
	display(head);
	//adding node at kth posititon
	cout<<"\nAFTER INSERTION at 4 "<<endl;
	insertAtK(head,4,25);
	display(head);
}
*/
