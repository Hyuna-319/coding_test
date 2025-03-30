#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int n;
    std::cin >> n;

    std::vector<double> v(n);
    std::vector<double> new_v(n);

    for (int i=0;i<n; i++) {
        std::cin >> v[i];
    }
    
    int max_socre = v[0];

    double sum = 0;

    for (int i=1; i<n; i++){
        if (v[i] > max_socre) max_socre = v[i];
    }
    
    for (int i=0; i<n; i++){
        new_v[i] = (v[i]/max_socre)*100;
        sum += new_v[i];
    }

    double avg = sum / n;
    std::cout << avg << std::endl;
    return 0;



}