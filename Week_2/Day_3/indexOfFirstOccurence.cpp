class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int l=0;
        int r=0;
        int cnt=0;
        int i=0;
        while(r<haystack.length()){
            if(haystack[r]==needle[i]){
                r++;
                i++;
                cnt++;
                if(cnt==m){
                    return l;
                }
            } else{
                l++;;
                r=l;
                i=0;
                cnt=0;
            }
        }
        return -1;
    }
};
//TC=O(NxM)
//SC=O(1)