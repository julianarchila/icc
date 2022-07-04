#include <iostream>

int main(){
    int l, r, k;
    std::cin >> l;
    std::cin >> r;
    std::cin >> k;
    
    int counter = 0;
    
    for (int i = l; i <= r; i++){
        if (i % k == 0){
            counter++;
        }
    }
    
    std::cout << counter << std::endl;
}
