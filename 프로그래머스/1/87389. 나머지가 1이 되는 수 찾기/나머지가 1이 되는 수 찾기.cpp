#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    vector<int> ret;
    int answer = 0;
    for(int i=1; i<n; i++){
        if( n % i == 1) ret.push_back(i);
    }
    
    sort(ret.begin(), ret.end());
    answer = ret[0];
    return answer;
}