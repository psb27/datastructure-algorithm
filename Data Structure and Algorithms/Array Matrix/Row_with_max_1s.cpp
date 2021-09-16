#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here

	   int j , max_row_index = 0;

	   j = m-1;

	   for(int i = 0; i < n; i++){ // Travesrsing the row of the matrix

		   	// move left until 0 is found
		   	bool flag = false; // to check whether the row has more number of 1s than previous row

		   	while(j >= 0 && arr[i][j] == 1){ // travesring from left to right until 0 is found
		   		j = j-1; // update the index of 1 found so far
		   		flag = true;

		   	}

		   	// if present row has more 1s than previous
		   	if(flag){
		   		max_row_index = i;
		   	}

		   	if(max_row_index == 0 && arr[0][m-1] == 0){
		   		return -1;
		   	}
		   	
		   	return max_row_index;

	   }

	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends