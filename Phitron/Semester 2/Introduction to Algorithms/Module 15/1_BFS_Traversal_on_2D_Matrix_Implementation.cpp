#include <bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

int n,m;
const int N = 1e3+5; 
int dist[N][N];
bool visited[N][N];
vector<pii> v = {{-1,0},{1,0},{0,-1},{0,1}};

bool isValid(int ci,int cj)
{
    if(ci>=0 && ci<n && cj>=0 && cj<m) return true;// if(ci<0 || cj<0 || ci>=n || cj>=m) return false; else return false;
    else return false;
}

void bfs(int si,int sj)
{
    queue<pii> q;
    q.push({si,sj});
    dist[si][sj] = 0;
    visited[si][sj] = true;

    while (!q.empty())
    {
        pii parent = q.front();
        q.pop();
        int pi = parent.first;
        int pj = parent.second;

        for (int i = 0; i < 4; i++)
        {
            // pii parent = v[i];

            // int ci = pi + parent.first;
            // int cj = pj + parent.second;
            int ci = pi+v[i].first;
            int cj = pj+v[i].second;

          //  cout << ci << " " << cj << endl;

            if(isValid(ci,cj) && !visited[ci][cj])
            {
                visited[ci][cj] = true;
                q.push({ci,cj});
                dist[ci][cj] = dist[pi][pj]+1;
            }
        }
        

    }
    
}

int main()
{

    cin >> n >> m;

    char s[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
        
    }
    
    int si,sj;
    cin >> si>>sj; // source er row, source er column //

    bfs(si,sj);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
        
    }

    //cout << dist[1][3];


    
     
    return 0;
}
