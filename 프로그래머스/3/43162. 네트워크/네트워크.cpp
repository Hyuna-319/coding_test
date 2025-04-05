#include <string>
#include <vector>

using namespace std;

vector<bool> visited;
vector<vector<int>> graph;

void recur(int node, int n) {
    visited[node] = true;
    for (int nxt = 0; nxt<n; nxt++){
        if (!visited[nxt] && graph[node][nxt] == 1){
            recur(nxt, n);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    visited.assign(n, false);
    graph = computers;
    
    int answer = 0;
    for (int i=0; i<n; i++){
        if (!visited[i]) {
            recur(i,n);
            answer++;
        }
    }
    return answer;
}