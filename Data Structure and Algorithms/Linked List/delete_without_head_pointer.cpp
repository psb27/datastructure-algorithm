// C++ program to delete node without head pointer  in a linked list


#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = new Node;

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

void deleteNode(Node* del){

	Node* temp = del -> next;

	// strong the next node value to the current node data
	del -> data = del -> next -> data;

	// breaking the next node link to next of next element
	del -> next = del -> next -> next;

	free(temp);
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 10);

	Node* del = head -> next;
	deleteNode(del);

	

	return 0;
}
