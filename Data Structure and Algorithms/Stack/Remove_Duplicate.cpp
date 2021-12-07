// remove adhjacent duplicate character from string 

#include<bits/stdc++.h>
using namespace std;


void RemoveDuplicate(string s){

	stack<char>st; // creating an empty stack

	int i = 0;

	int len = s.length();

	while(i < len){ // traversing through string 

		if(st.empty()){ // if the stack is empty then push the ith character in the stack

			st.push(s[i]);
		}
		else { // otherwise check if the top of the stack is equal to next character in string

			if(st.top() == s[i]){ // if above condition becomes true then pop the top
				st.pop();
			}
			else { // otherwise push the character to in the stack
				st.push(s[i]);
			}
		}
		i++;
	}

	s = "";

	while(!st.empty()){

		s = st.top() + s; // after above operation adding non repeating character in empty string
		st.pop();
	}

	cout << s << endl;

	
}

int main(){

	string s;
	cin >> s;

	RemoveDuplicate(s);

	return 0;
}