#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    queue<pair<int,int>> q;
    q.push({0,0});
    
    while (!q.empty()){
        int sum = q.front().first;
        int idx = q.front().second;
        q.pop();
        
        if (idx == numbers.size()){
            if (sum == target) answer ++;
        } else {
            q.push({sum+numbers[idx], idx+1});
            q.push({sum-numbers[idx], idx+1});
        }
    }
    
    return answer;
}