#include <string>
#include <vector>

using namespace std;

vector<int> temp;
int solution(int n) {
    for (int i=1; i<=n; i++) {
        if(n%i != 0) continue;
        else temp.push_back(i); 
    }
    
    int sum = 0;
    for (int a : temp) {
        sum += a;
    }

    return sum;
}