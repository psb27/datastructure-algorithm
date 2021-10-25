/* You are given an integer array nums. You are initially positioned at the array's 
first index, and each element in the array represents your maximum jump length 
at that position.

Return true if you can reach the last index, or false otherwise.
*/

#include<bits/stdc++.h>
using namespace std;

bool JumpGame(vector<int>&nums) {


	 int i,n=a.size(),maxi=0;
        
     if(n==1) return 1;

     for(i=0;i<n;i++){
         if(maxi>=i) maxi=max(maxi, i+a[i]);
     }
     
        return maxi>=(n-1);
}

int main() {

	int n;
	cin >> n;

	vector<int>num(n);

	for(int i=0; i<n; i++){
		int x;
		ciin >> x;

		num.push_back(x);
	}

	bool result = JumpGame(num);

	cout << result << "\n";

	return 0;
}