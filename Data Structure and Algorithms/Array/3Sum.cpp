#include<bits/stdc++.h>
using namespace std;

int main(){

	int n; cin >> n;
	int target; cin >> target;
	vector<int> v(n);

	for(auto &i : v)
		cin >> i;
	bool found =  false;

	sort(v.begin(), v.end());

	for(int i=0; i<n; i++){

		int low = i+1 , high = n-1;
		while(low<high){
			int current = v[i] + v[low] + v[high];
			if(current == target)
				found = true;
			if(current < target)
				low++;
			else
				high--;
		}
	}

	if(found == true){
		cout << "True" ;
	}
	else{
		cout << "False";
	}

	return 0;
}