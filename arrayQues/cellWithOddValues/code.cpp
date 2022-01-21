class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int ctr =0;
        vector<int> arr(m*n, 0);
        
        for (int i=0;i<indices.size();i++){
            int r = indices[i][0];
            int c = indices[i][1];

            for (int j=0;j<n;j++){
                int e = j + n * r;       
                arr[e]++;
            }
            
            for (int j=0;j<m;j++){
                int e = c + j * n ;
                arr[e]++;
            }   
        }

        for (int i=0;i<arr.size();i++){
            if (arr[i] % 2 != 0)
                ctr++;
        }
        
        return ctr;
    }
};