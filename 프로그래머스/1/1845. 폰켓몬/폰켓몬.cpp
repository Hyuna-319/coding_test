#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;


int solution(vector<int> nums)
{   unordered_set<int> ret;
    for(int a: nums){
    ret.insert(a);
}   
    int max_pick = nums.size() /2;

    
    return min((int)ret.size(), max_pick);
}