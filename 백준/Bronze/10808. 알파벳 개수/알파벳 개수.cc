#include <bits/stdc++.h>

using namespace std;

string s;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    vector<int> count(26,0);

    cin >> s;

    for(int ch : s){
        count[ch-'a']++;
    }

    for (int i : count){
        cout << i << ' ';
    }





    return 0;
}