#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    double root = sqrt(n);
    long long ret=0;
    if(root == (long long)root){
        ret = (long long)root+1;
    }

    long long answer = 0;
    if(ret==0) answer = -1;
    else answer = ret*ret;
    return answer;
}