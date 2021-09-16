// Creating a linked list data structure and printing it

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// function to print the linked list nodes
void printLinkedList(Node* n){

	while(n != NULL){
		cout << n -> data << " ";
		n = n -> next;
	}
}



int main(){

	Node* head = NULL;
	Node* first = NULL;
	Node* second = NULL;

	//creating the 3 nodes
	head = new Node();
	first = new Node();
	second = new Node();

	head->data = 1; // assigning the head 1
	head -> next = first; // linking to the next pointer address

	first -> data = 2;
	first -> next = second;

	second -> data = 3;
	second -> next = NULL;

	printLinkedList(head);

	return 0;


}