
//Accepted	12 ms	cpp
#define MAX(A,B) (A>B?A:B)
#define MIN(A,B) (A<B?A:B)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        
        sort(nums.begin(), nums.end(), less<int>());
        
        nums.erase(unique(nums.begin(), nums.end()),nums.end());
        
        int i,j,len;
        
        i = 0;
        j = len = i+1;
        
        ans = MIN(1,nums.size());
        
        while(j < nums.size()){
            if(nums[j] - nums[i] == len){
                j++,len++;
                ans = MAX(ans, len);
            }
            else{
                i = j++;
                len = 1;
                ans = MAX(ans, len);
            }
        }
        
        return ans;
    }
};
