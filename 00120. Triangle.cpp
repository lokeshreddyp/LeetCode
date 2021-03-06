
//	Accepted	16 ms	cpp

class Solution {
private:
    int _n,_m;
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        _n = (int)triangle.size();
        _m = (int)triangle[_n-1].size();
        
        int star = 2;
        for(int i = _n-star;i>-1;i--,star++)
        {
            for(int j=0;j<_m - star + 1;j++)
            {
                triangle[i][j] = min(triangle[i][j] + triangle[i+1][j],triangle[i][j] + triangle[i+1][j+1]);
            }
        }
        
        return triangle[0][0];
    }
    
};

