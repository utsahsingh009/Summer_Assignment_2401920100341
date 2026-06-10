class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        if(n<=1){
            return false;
        }
        string s1=s+s;
        string s2=s1.substr(1,2*n-2);
        if(s2.find(s)==string::npos){
            return false;
        } else{
            return true;;
        }
    }
};
//TC=O(N) to O(NxN)
//SC=O(N)