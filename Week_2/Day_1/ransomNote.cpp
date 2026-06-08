class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(char c : ransomNote){
            freq1[c - 'a']++;
        }
        for(char c : magazine){
            freq2[c - 'a']++;
        }
        for(char c : ransomNote){
            if(freq1[c - 'a']>freq2[c - 'a']){
                return false;
            }
        }
        return true;
    }
};
//TC=O(N+M)
//SC=O(1)