#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    int sum = 0;
    for( int i=0; i<arr.size(); i++){
        sum += arr[i];
    }
    double answer = sum*(1.0) / arr.size();
    return answer;
}