// Creating a linked List and inserting a node at the nth position

#include <bits/stdc++.h>
using namespace std;

class Node {

public:
	int data;
	Node* next;
};

Node* head;

void Insert(int num, int pos){

	Node* temp1 = new Node(); // creating a temporary node
	temp1 -> data = num; // storing the data field
	temp1 -> next = NULL; // assigning the null to the pointer variable

	if(pos == 1){ // if the list is empty
		temp1 -> next = head; // assigning null of head to the temp1
		head = temp1; // linking head to the temp1
		return;
	}

	// if linked list have more than one element

	// creating another temporary node

	Node* temp2 = head; // assingning head to the temp2 for traversal

	// traversing to the previous element of the given position of linked list

	for(int i=0; i<pos-2; i++){
		temp2 = temp2 -> next;
	}

	temp1 -> next = temp2 -> next; // assigning the previous position node link to the newly created temp1 node
	temp2 -> next = temp1; // now linking to temporary node to the given position node


}


// Another way
/*void InserAfter(Node* head, int num){

	// Check if the given node is null or not

	if(head == NULL){
		return;
	}

	Node* temp = new Node(); // creating a temporary node

	// filling the given data to the temporary node
	temp -> data = num;


	temp -> next = head -> next; // creating link of temp to next of head

	head -> next = head; // breaking the previous link and linking to the new temp node


}*/

void Print(){
	Node* temp = head;

	while(temp != NULL){
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "\n";
}



int main() {

	head = new Node(); // empty list

	Insert(2, 1); // List: 2
	Insert(3, 2); // List: 2, 3
	Insert(4, 1); // List: 4, 2, 3
	Insert(5, 2); // List: 4, 5, 2, 3
	

	Print();

	return 0;
}