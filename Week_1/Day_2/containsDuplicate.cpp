//Using Set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            if(st.find(nums[i])!=st.end()){
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};   
//TC=O(N)
//SC=O(N)
//Using sorting
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};
//TC=O(NlogN)
//SC=O(1)