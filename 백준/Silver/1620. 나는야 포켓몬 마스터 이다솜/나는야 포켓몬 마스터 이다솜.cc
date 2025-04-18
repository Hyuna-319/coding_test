#include <bits/stdc++.h>

using namespace std;


int n,m;
string temp;
map<string, int> name_idx;
map<int, string> idx_name;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    cin >> n >> m;

    for (int i=1; i<=n; i++){
        string name;
        cin >> name;
        name_idx[name] = i; 
        idx_name[i] = name;
    }

    for (int i=0; i<m; i++){
        cin >> temp;
        if (isdigit(temp[0])) {
            int num = stoi(temp);
            cout << idx_name[num] << '\n';

        } else {
            cout << name_idx[temp] << '\n';
        }
    }


    return 0;

}
