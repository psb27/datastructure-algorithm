#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin >> s;

	int n = s.length();

	set<string>mystring;

	for(int i=0; i<n; i++){

		mystring.insert(s[i]);
	}

	//set<string>mystring::iterator itr;

	for(string value : mystring){
		cout << value << endl;
	}




}