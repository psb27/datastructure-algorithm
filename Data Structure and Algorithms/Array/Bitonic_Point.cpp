// find the largest element prensent in the given array

/*
Input: 
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
*/

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    
	    int start = 0, end = n-1;
	    
	    while(start <= end){
	        
	        int mid = start + (end - start)/2;
	        
	        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
	            return arr[mid];
	        }
	        if(arr[mid] < arr[mid + 1]){
	            start = mid + 1;
	        }
	        else {
	            end = mid - 1;
	        }
	    }
	}
};
