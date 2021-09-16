// Creating a linked list and inerting the node at the end of the linked list

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};


void InsertAtEnd(Node* head, int num) {

	Node* temp1 = new Node(); // creating temporary node

	Node* temp2 = head;

	temp1 -> data = num;
	temp1 -> next = NULL;

	while(temp2 -> next != NULL){
		temp2 = temp2 -> next;
	}
	
}

void Print(Node* head) {

	Node* temp = new Node();

	temp = head;

	while(temp != NULL){
		cout << temp -> data << " -> ";
		temp = temp -> next;
	}

	cout << "\n";
}

int main()  {

	Node* head = new Node();

	InsertAtEnd(head, 2);
	
	Print(head);

	return 0;
}