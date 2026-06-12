class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int j=0;
        while(j<n){
            char curr_char=chars[j];
            int cnt=0;
            while(j<n&&chars[j]==curr_char){
                cnt++;
                j++;
            }
            chars[i]=curr_char;
            i++;
            if(cnt>1){
                string cnt_str=to_string(cnt);
                for(char ch:cnt_str){
                    chars[i]=ch;
                    i++;
                }
            }
        }
        return i;
    }
};
//TC=O(N)
//SC=O(1)