// The simple solution is to keep the four pointer top , left , bottom, right for positon
// 

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
         int T,B,L,R,dir;
    T=0; // top pointer
    B=A.size()-1; // bottom pointer
    L=0; // left pointer
    R=A[0].size()-1; // right pointer
    dir=0; // direction indicator
    int i;
    vector<int> ans;
    
    while(T<=B && L<=R)
    {
        if(dir==0) // for left to right
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1) // for top to bottom
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2) // right to left
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3) // bottom to top
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4; // for repeating other iterations
    }
    return ans;
    }
};