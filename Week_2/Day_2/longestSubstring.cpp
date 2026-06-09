//BRUTE FORCE
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1){
            return 1;
        } else if(s.length()<1){
            return 0;
        }
        unordered_map<char,int> mpp;
        int cnt=1;
        int maxi=0;
        int l=0;
        int r=1;
        mpp[s[l]]=1;
        while(r<s.length()){
            if(!mpp.contains(s[r])){
                mpp[s[r]]++;
                r++;
                cnt++;
                maxi=max(maxi,cnt);
            } else{
                mpp.clear();
                l++;
                mpp[s[l]]=1;
                r=l+1;
                cnt=1;
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};
//TC=O(NxN)
//SC=O(min(NxM))
//OPTIMAL SOLUTION
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int maxi=0;
        int l=0;
        for(int r=0;r<s.length();r++){
            if(mpp.contains(s[r])){
                l=max(l,mpp[s[r]]+1);
            }
            mpp[s[r]]=r;
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};
//TC=O(N)
//SC=O(1)