class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        }
        sort(strs.begin(), strs.end());
        string First=strs[0];
        string Last=strs.back();
        int cnt=0;
        for(int i=0;i<min(First.size(),Last.size());i++){
            if(First[i]!=Last[i]){
                break;
            }
            cnt++;
        }
        return First.substr(0,cnt);
    }
};
//TC=O(MxNlogN)(M->length of longest string in strs)
//SC=O(1)