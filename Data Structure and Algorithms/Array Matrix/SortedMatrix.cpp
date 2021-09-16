// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        // code here
        
        // temporary array of size n*n;
        int arr[n * n];
        int k = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                arr[k++] = mat[i][j];
            }
        }
        
        sort(arr, arr + k);
        
        // copying the sorted elements to the matrix
        k = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mat[i][j] = arr[k++];
            }
        }
        
        
        return mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends