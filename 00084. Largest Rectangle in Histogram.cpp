
//Accepted	24 ms	cpp

class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int ans = 0;
        height.push_back(0);
        int n = (int)height.size();
        stack<int> s;
        int ranger = 0;
        while(ranger < n){
            if(s.empty() || height[ranger] >= height[s.top()]) s.push(ranger++);
            else{
                int index = s.top();
                s.pop();
                ans = max(ans, height[index] * (s.empty() ? ranger : ranger - s.top() - 1));
            }
        }
        return ans;
    }
};
