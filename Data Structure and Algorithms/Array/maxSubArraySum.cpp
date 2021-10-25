// The array is given we have to return the maximum subarray sum

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int>&nums){

	int n = nums.size();

	int maxSum = INT_MIN;

	int currentSum = 0;

	for(int i=0; i<n; i++){

		currentSum += nums[i];

		maxSum = max(currentSum, maxSum);

		if(currentSum < 0){
			currentSum = 0;
		}
	}

	return maxSum;
}


int main(){

	int n;
	cin >> n;

	vector<int>nums;

	for(int i=0; i<n; i++){
		int x; 
		cin >> x;

		nums.push_back(x);
	}

	int ans = maxSubArraySum(nums);

	cout << ans << "\n";

	return 0;
}