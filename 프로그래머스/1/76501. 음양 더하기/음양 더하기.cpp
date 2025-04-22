#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    
    for(int i=0; i<signs.size(); i++){
        if (signs[i] == false) 
            absolutes[i] *= (-1);
    }
    int answer = 0;
    for (int i=0; i<absolutes.size(); i++){
        answer += absolutes[i];
    }
    return answer;
}