// Find the union and intersection of two arrays

#include<bits/stdc++.h>
using namespace std;

int main(){

	int testcases;
	cin >> testcases;

	while(testcases--){

		int n,m;
		cin >> n >> m;

		int arr1[n], arr2[m];

		unordered_map<int,int>map;

		for(int i=0; i<n; i++){
			cin >> arr1[i];

			map[arr1[i]]++;

		}

		for(int i=0; i<m; i++){

			cin >> arr2[i];

			map[arr2[i]];
		}

		cout << map.size() << endl;

	}
}