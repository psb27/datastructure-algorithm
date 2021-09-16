// Creating a linked list and inserting the element at the begining 

#include<bits/stdc++.h>
using namespace std;


class Node {
public:
	int data;
	Node* next;
};

Node* Insert(Node* head, int x){

	Node* temp = new Node(); // creating a new temporary node
	temp->data = x; // filling the data receiving from the input
	temp->next = head;
	head = temp;
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

		head = Insert(head, x);
		Print(head);
	}

	return 0;
}