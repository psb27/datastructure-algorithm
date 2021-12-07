// Implementing stack using array

#include<bits/stdc++.h>
using namespace std;



class Stack 
{
	int *arr;
	int max_size;
	int top;

public:
	Stack(int size ){
		arr = new int(size);
		max_size = size;
		top = -1;
	}

	// To check if the stack is empty or not
	bool isFull(){

		return (top + 1) == max_size ? true : false;
	}

	//To check if the stack is empty or not
	bool isEmpty(){

		return top == -1 ? true : false;
	}

	void push(int data){

		if(isFull()){

			cout << "Stack Overflow" << "\n";
		}
		else {
			top++;
			arr[top] = data;
		}
	}

	void pop(){

		if(isEmpty()){

			cout << "Stack Underflow" << "\n";
		}
		else {
			top--;
		}
	}

	int getTop(){

		if(isEmpty()){

			cout << "Stack Underflow" << "\n";

		}
		else {
			return arr[top];
		}
	}

	int getSize(){

		return top + 1;
	}

	int getMaxSize(){

		return max_size;
	}

	void print(){

		cout << "\n";

		for(int i=0; i<max_size; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
};

int main(int argc, char const *argv[])
{

	Stack st = Stack(5);
	st.pop();
	st.push(1);
	st.push(2);
	st.push(3);
	cout << st.getTop() << "\n";
	st.pop();
	cout << st.getTop() << "\n";
	st.push(4);
	st.push(5);
	st.push(6);
	st.push(7);
	
	return 0;
}