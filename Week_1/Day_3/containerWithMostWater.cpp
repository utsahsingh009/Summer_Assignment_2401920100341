class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        long long area=1;
        long long maxi=0;
        int i=0;
        int j=n-1;
            while(i<j){
                int mini=min(height[i],height[j]);
                area=mini*(j-i);
                maxi=max(maxi,area);
                if(height[i]<height[j]){
                    i++;
                }
                else{
                    j--;
                }
            }
        return maxi;
    }
};
//TC=O(N)
//SC=O(1)