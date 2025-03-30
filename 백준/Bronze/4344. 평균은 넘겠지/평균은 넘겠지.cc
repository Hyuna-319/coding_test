#include <iostream>
#include <vector>
#include <iomanip>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int c;
    std::cin >> c ;

    while (c--) {
        int n;
        std::cin >> n;

        std::vector<int> v(n);
        int sum = 0;

        for (int i=0; i <n ; i++) {
            std::cin >> v[i];
            sum += v[i];
        }

        double avg = double(sum) / n;

        int count = 0;
        

        for (int i=0; i <n; i++) {
            if (v[i] > avg) {
                count ++;
            }
        }

        double total = (count *100.0) / n ;

        std::cout << std::fixed << std::setprecision(3) << total << '%' << std::endl;
      
    }
    return 0;

}