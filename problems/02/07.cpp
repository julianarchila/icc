#include <iostream>

int main() {
    int nl [4];

    for (int i = 0; i < 4; i++) {
        std::cin >> nl[i];
    }


    int max = nl[0];

    for (int i = 1; i < 4; i++) {
        if (nl[i] > max) {
            max = nl[i];
        }
    }

    std::cout << max << std::endl;


}