class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> vec;
        if(s.length()<p.length()) return vec;
        unordered_map<char,int> mpp;
        for(char c : p){
            mpp[c]++;
        }
        unordered_map<char,int> mpp1;
        int l=0;
        for(int r=0;r<s.length();r++){
            mpp1[s[r]]++;
            if(r-l+1>p.length()){
                mpp1[s[l]]--;
                if(mpp1[s[l]]==0){
                    mpp1.erase(s[l]);
                }
                l++;
            }
            if(mpp==mpp1){
                vec.push_back(l);
            }
        }
        return vec;
    }
};
//TC=O(N)
//SC=O(1)