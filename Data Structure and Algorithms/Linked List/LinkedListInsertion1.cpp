// Creating a linked list and inserting the element at the end

#include<bits/stdc++.h>
using namespace std;


class Node {
public:
	int data;
	Node* next;
};

Node* InsertAtEnd(Node* head, int x){


	Node* temp = new Node(); // creating a new temperary node to insert
	temp -> data = x; // filling the data field of the node 
	temp -> next = head -> next; // make temp next to next of head | linking to the next element
	head -> next = temp; // inserting temp after head pisition

	return head;
}

void Print(Node* head){

	Node* temp = head;

	while(temp != NULL){
		cout << temp -> data << "->";
		temp = temp -> next;
	}

	cout << "\n";
}

int main(){

	Node* head = NULL;

	int n,x;
	cin >> n;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		head = InsertAtEnd(head, x);
		Print(head);
	}

	return 0;
}