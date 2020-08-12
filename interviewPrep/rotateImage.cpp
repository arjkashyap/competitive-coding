class Solution {
public:
    
    void reverse(vector<int>& v)
    {
        int l = 0, r = v.size()-1;
        while(l <= r){
            swap(v[l], v[r]);
            l++;
            r--;
        }
    }
    
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        
        for(int i = 0; i < n; i++){
            reverse(matrix[i]);
        }
        
    }
};