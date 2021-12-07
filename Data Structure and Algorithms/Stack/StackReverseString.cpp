#include<bits/stdc++.h>
using namespace std;


void solve(){


	string s;

	cin >> s;

	int len = s.size();

	stack<char> st;

	for(int i=0; i<len; i++){

		st.push(s[i]);
	}

	string ans = "";

	
	while(!st.empty()){

		ans = ans + st.top();
		st.pop();
	}
	

	cout << ans << endl;
}

int main(){

	solve();

	return 0;
}