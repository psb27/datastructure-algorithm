
#include<bits/stdc++.h>
using namespace std;

void kthSmallestElement(int arr[] , int size, int k){

	for(int i=0; i<size; i++){

		bool swapped = false;

		for(int j=0; j<size-i-1; j++){

			if(arr[j]>arr[j+1]){

				swap(arr[j], arr[j+1]);

				swapped = true;
			}

		}

		if(swapped == false)
			break;		
	}

	for(int i=0; i<size; i++){
		cout << arr[i] <<" ";
	}


	cout << "Kth Smallest Element is : " << arr[size-1-k] << endl;
}

int main(int argc, char const *argv[])
{
	
	int t; cin >> t;
	while(t--){

		int n ; cin >> n;
		int k; cin >> k;

		int arr[n];

		for(int i= 0; i<n; i++){
			cin>> arr[i];
		}

		kthSmallestElement(arr, n, k);
	}
	return 0;
}