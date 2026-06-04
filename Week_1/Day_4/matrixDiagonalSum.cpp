//Brute force
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j||i+j==n-1){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};
//TC=O(NxN)
//SC=O(1)
//Optimal Solution
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            sum+=mat[i][n-1-i];
        }
        if(n%2!=0){
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};
//TC=O(N)
//SC=O(1)