#include<bits/stdc++.h>
using namespace std;

/* An anagram of a string is another string that contains the same characters, only the order of characters can be different.
 For example, “abcd” and “dabc” are an anagram of each other.*/

bool validAnagram(string s, string t){

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	if(s == t){
		return true;
	}
	else{
		return false;
	}


}

int main(int argc, char const *argv[])
{
	
	string s, t;
	cin >> s >> t; 

	// listen - silent are anagram of each other

	cout << validAnagram(s,t) << endl;

	return 0;
}