class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int l=0;
        int r=n-1;
        int ind=n-1;
        while(l<=r){
            int ll=nums[l]*nums[l];
            int rr=nums[r]*nums[r];
            if(ll>rr){
                ans[ind]=ll;
                l++;
            } else{
                ans[ind]=rr;
                r--;
            }
            ind--;
        }
        return ans;
    }
};
//TC=O(N)
//SC=O(N)