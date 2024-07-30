#include<iostream>
#include "D:\Summar Training 2024\concepts\manualLinkedList\node.cpp"
using namespace std;
void deleteDup(Node * head)
{
	Node * temp=head;
	while(temp->next!=NULL)
	{
		if (temp->value==temp->next->value)
		{
			deleteNode(temp);
		}
		else{
			temp=temp->next;
		}
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
	display(head);
	deleteDup(head);
	display(head);
}