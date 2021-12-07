// Remove k adjancent duplicate character from the given string

// remove adhjacent duplicate character from string 

#include<bits/stdc++.h>
using namespace std;


void RemoveDuplicateKAdjacent(string s, int k){

	stack<pair<char,int>>st; // creating thestack of pair which stores the character with its number of repeated occurences

	pair<char, int>t; // creating a pair

	int i=0;
	int n = s.length();

	while(i < n){ // traversing the string

		if(st.empty()){ // if the stack is empty
			st.push(s[i], 1); // then push the first character with their occurence number
		}
		else { // otherwise check if the string char matches to the top of the stack

			if(st.top().first == s[i]){ // element if yes then

				if(st.top().second == (k-1)){ // we check if the occurence is kth or not if yes then

					for(int j=0; j<k; j++) // we pop all k-1 char from stack
						st.pop();
				}
				else { // else we push with the +1 occurence number
					st.push(s[i], st.top() + 1);
				}
			}
			else {
				st.push(s[i], 1); // else we start from new char and new occurences
			}
		}

		i++;
	}

	s = "";

	while(!st.empty()){ // final string must not 

		s = st.top().first + s;
		st.pop();
	}

	cout << s << endl;
	
}

int main(){

	string s;
	cin >> s;

	int k;
	cin >> k;

	RemoveDuplicateKAdjacent(s, k);

	return 0;
}