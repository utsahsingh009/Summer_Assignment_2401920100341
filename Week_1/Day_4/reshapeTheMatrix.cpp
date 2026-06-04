class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if((n*m)!=(r*c)){
            return mat;
        }
        vector<vector<int>> ans;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vec.push_back(mat[i][j]);
                if(vec.size()==c)
                {
                    ans.push_back(vec);
                    vec.clear();
                }
            }
        }
        return ans;
    }
};
//TC=O(NxM)
//SC=O(c)(Auxiliary Space due to .clear())