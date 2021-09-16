// Simple using Binary Search to find the target
// Treating row as sorted array and chacking if it present or not if not changing the 
// column if the column exceeds then return false

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       if(!matrix.size())
           return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int start = 0 , end = m*n-1;
        
        while(start <= end){
            
            int mid = start + (end-start)/2;
            
            if(matrix[mid / m][mid % m] == target){
                return true;
            }
            
            if(matrix[mid / m][mid % m] < target){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return false;
        
    }
};