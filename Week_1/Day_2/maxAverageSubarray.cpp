//Using prefix sum
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pref(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
        }
        int maxi=INT_MIN;
        for(int i=0;i<=n-k;i++){
            int sum=pref[i+k]-pref[i];
            maxi=max(maxi,sum);
        }
        return (double)maxi/k;
    }
};
//TC=O(N)
//SC=O(N)
//Using sliding window
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxi=sum;
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            maxi=max(maxi,sum);
        }
        return (double)maxi/k;
    }
};
//TC=O(N)
//SC=O(1)