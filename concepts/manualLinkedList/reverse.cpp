#include<iostream>
#include "D:\Summar Training 2024\concepts\manualLinkedList\node.cpp"
using namespace std;
int deleteDup(Node * temp)
{
	
	if(temp->next==NULL)
	{
		return temp->value;
	}
	else
	{
		
		cout<<deleteDup(temp->next)<<" ";
	}
	return temp->value;
}
void reversePrint(Node * head)
{
	if(head==nullptr)
	{
		cout<<"Reversed List: ";
	}
	else{
	reversePrint(head->next);
	cout<<head->value<<" ";
	}
}
int main()
{
	Node * head= new Node(3);
	insertAtEnd(head,3);
	insertAtEnd(head,3);
	insertAtEnd(head,5);
	insertAtEnd(head,6);
	insertAtEnd(head,6);
	insertAtEnd(head,6);
	//display(head);
	reversePrint(head);
	display(head);
}