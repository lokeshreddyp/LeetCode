
class Solution {
public:
    string convert(string s, int nRows) {
        if(nRows == 1) return s;
        int len = s.length();

        const int dir[2][2] = {{1,0},{-1,1}};
        char maze[nRows][len];
        memset(maze,'$',sizeof(maze));

        int i,j,k,dirk;
        i = -1;
        j = k = dirk = 0;
        while(k < len)
        {
            int x = i+dir[dirk][0];
            int y = j+dir[dirk][1];
            if(x>-1&&x<nRows&&y>-1&&y<len)
            {
                maze[x][y] = s[k];
                i = x , j = y , k++;
            }
            else
                dirk = (dirk+1)%2;
        }

        k = 0;
        for(i=0;i<nRows;i++)
        {
            for(j=0;j<len;j++)
                if(maze[i][j] != '$') s[k++] = maze[i][j];
        }

        return s;
    }
};

