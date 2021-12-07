// To find the middle element  of the linked list


#include<bits/stdc++.h>
using namespace std;

int geMiddleElement(Node* head) {

	Node* temp = head;

	int middle_element = 0;

	if(temp != NULL){

		Node* slow = temp;
		Node* fast = temp;

		while(temp != NULL && temp -> next != NULL){

			slow -> next;
			fast -> next -> next;
		}

		middle_element = slow -> data;
		return middle_element;
	}



}

int main(int argc, char const *argv[])
{
	


	return 0;
}