class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        unordered_map<char,int> mpp;
        for(char c : s1){
            mpp[c]++;
        }
        unordered_map<char,int> mpp1;
        int l=0;
        for(int r=0;r<s2.length();r++){
            mpp1[s2[r]]++;
            if(r-l+1>s1.length()){
                mpp1[s2[l]]--;
                if(mpp1[s2[l]]==0){
                    mpp1.erase(s2[l]);
                }
                l++;
            }
            if(mpp==mpp1){
                return true;
            }
        }
        return false;
    }
};
//TC=O(N)
//SC=O(1)