// Implementing the stack using linked list 

#include<bits/stdc++.h>
using namespace std;

class Stack {

	struct Node{

		int data;
		Node* next;

		Node(int d){

			data = d; next = NULL;
		}

	};

	Node *head;
	int size;


public:
	Stack(){

		head = NULL;
		size = 0;
	}

	bool isEmpty(){

		return head == NULL;
	}


	void push(int data){

		Node* new_head = new Node(data);

		if(isEmpty()){ // checking if the stack is empty oior not
			head = new_head;
		}
		else {

			// if the stack is not empty create a new node and push data
			new_head -> next = head;
			head = new_head;
			 
		}
		size += 1;
	}

	void pop(){

		if(isEmpty()){

			cout << "Stack Underflow" << "\n";
			return;
		}
		else {

			Node* toDelete = head;
			head = head -> next;
			free(toDelete);
			size -= 1;

		}
	}

	int top() {

		if(isEmpty()){

			cout << "Stack Underflow" << "\n";
			return -1;
		}
		else {
			int data = head->data;
			return data;
		}

	}

	int getSize(){

		return size;

	}

	void print(){

		if(isEmpty()) {

			cout << "Stack is Empty" << "\n";
			return;
		}
		else {

			Node* current = head;

			while(current != NULL){

				cout << current -> data << " ";
				current = current -> next;
			}

			cout << "\n";
		}
	}

};

int main(int argc, char const *argv[])
{

	Stack st = Stack();

	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.print();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.print();
	st.push(10);
	st.push(20);
	st.push(30);
	st.print();
	cout << st.top() << endl;
	cout << st.getSize() << endl;
	

	return 0;
}