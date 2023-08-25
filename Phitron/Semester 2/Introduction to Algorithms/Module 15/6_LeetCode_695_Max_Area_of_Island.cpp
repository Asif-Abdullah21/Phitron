class Solution   
{
public:
    int n, m;
    bool vis[100][100];
    vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    bool isValid(int cI, int cJ)
    {
        if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
            return true;
        else
            return false;
    }
    int cnt;
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        cnt++;
        for (int i = 00; i < 4; i++)
        {
            pair<int, int> p = path[i];
            int ci = si + p.first;
            int cj = sj + p.second;
            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    cnt = 0;
                    dfs(i, j, grid);
                    mx = max(cnt, mx);
                }
            }
        }
        return mx;
    }
};




//-----------------------------------------


// class Solution {
// public:
// vector<pair<int,int>> path={{-1,0},{1,0},{0,-1},{0,1}};
// int n,m;
// bool IsValid(int vi,int vj)
// {
//     if(vi>=0 && vi<n && vj>=0 && vj<m) return true;
//     else return false;
// }
// int mx=0,cnt=0;
// bool visited[100][100];
//     void dfs(int ui,int uj,vector<vector<int>>& grid)
//     {
//         cnt++;
//         mx = max(cnt,mx);
//         visited[ui][uj] = true;
//         for(int i=0;i<4;i++)
//         {
//             int vi = path[i].first+ui;
//             int vj = path[i].second+uj;
//             if(IsValid(vi,vj) && !visited[vi][vj] && grid[vi][vj]==1)
//             {
//                 dfs(vi,vj,grid);
//             }
//         }
//     }
//     int maxAreaOfIsland(vector<vector<int>>& grid) {
//         n = grid.size();
//         m = grid[0].size();

//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(!visited[i][j] && grid[i][j]==1)
//                 {
//                     dfs(i,j,grid);
//                     cnt=0;
//                 }
//             }
//         }

//         return mx;
//     }
// };