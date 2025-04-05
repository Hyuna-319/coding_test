#include<vector>
#include<queue>

using namespace std;

int solution(vector<vector<int> > maps)
{   int n = maps.size();
    int m = maps[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
 
    queue<pair<int,int>> q ;
    q.push({0,0});
    visited[0][0] = true;
 
    int dy[4] = {-1,1,0,0};
    int dx[4] = {0,0,-1,1};
    while (!q.empty()){
        int ey = q.front().first;
        int ex = q.front().second;
        q.pop();
        
        for (int i=0; i<4; i++){
            int ny = ey + dy[i];
            int nx = ex + dx[i];
            
            if (ny>=0 && ny < n && nx >=0 && nx<m){
                if (maps[ny][nx] ==1 && visited[ny][nx] ==0) {
                    visited[ny][nx] = true;
                    maps[ny][nx] = maps[ey][ex] + 1;
                    q.push({ny,nx});
                }
            }
            }
        }
 
      if (maps[n-1][m-1] == 1) 
          return -1;
      else 
          return maps[n-1][m-1];
      
    }
    