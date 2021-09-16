
#include<bits/stdc++.h>
using namespace std;

//O(n)
/*
int main(){

	int n; cin >> n;

	int arr[n];

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	int start = 0; int end = n-1;

	while(start<end){

		if(arr[start] == arr[end]){

			cout << arr[start] << endl;
			break;

		}

		start++;
		end--;
	}

	return 0;
}*/

// O(nlogn)

int firstRepeated(int arr[], int n) {
        //code here
        int minIndex = -1;
        
        set<int> myset;
        
        for(int i=n-1; i>=0; i--){
            
        
            if(myset.find(arr[i]) != myset.end()){
                minIndex = i;
            
            }
            else {
                myset.insert(arr[i]);
            }
        }
        
        if(minIndex != -1)
            return arr[minIndex];
        else
            return -1;
        
    }

    

int main(int argc, char const *argv[])
{
	int 
	
	return 0;
}