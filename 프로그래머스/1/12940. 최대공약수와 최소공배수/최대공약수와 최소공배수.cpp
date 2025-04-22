#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = n, b = m;
    
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    int g = a;
    int l = (n*m) / g;
    answer.push_back(g);
    answer.push_back(l);
    return answer;
}