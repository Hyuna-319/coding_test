#include <bits/stdc++.h>

using namespace std;

string s, ret;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> s;
    ret = s ;

    reverse(ret.begin(), ret.end());

    if ( s == ret) cout << 1 << '\n';
    else cout << 0 << '\n';



    return 0;
}