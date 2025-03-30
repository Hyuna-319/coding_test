#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int arr[1000000];

    for (int i = 0; i <n; i++){
        std::cin >> arr[i];

    }
    int min_val = arr[0];
    int max_val = arr[0];

    for (int i = 1; i< n; i++){
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    std::cout << min_val << " " << max_val << std::endl;
    return 0;


}