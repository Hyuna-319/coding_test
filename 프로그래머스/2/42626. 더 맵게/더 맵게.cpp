#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> q;
    int answer = 0;
    
    for (int s: scoville) {
        q.push(s);
    }
    
    while (q.size() >1 && q.top() < K) {
        int start = q.top(); q.pop();
        int end = q.top(); q.pop();
        
        int score = start + (end*2);
        q.push(score);
        answer ++;
    }
    
    if (q.top() < K) return -1;
        
        

     
    return answer;
        

            
        }
    
    
