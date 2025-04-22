#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    
    vector<long long> answer;
    
    for(int i=1; i<=n; i++){
        int ret = i*x;
        answer.push_back(ret);
    }
    

    

    return answer;
}