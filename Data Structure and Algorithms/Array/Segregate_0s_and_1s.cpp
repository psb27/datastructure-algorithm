class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        
        int count_zero = 0;
        int count_one = 0;
        
        for(int i=0; i<n; i++){ // count the number of 0s and 1s
            
            if(arr[i] == 1){
                count_one++;
            }
            else {
                count_zero++;
            }
        }
        
        for(int i=0; i<count_zero; i++){ // assigning all the zeros to the left of the array
            arr[i] = 0;
        }
        
        for(int i = count_zero; i<n; i++){ // assignig all the one to the right of the array
            arr[i] = 1;
        }
             
    }
};
