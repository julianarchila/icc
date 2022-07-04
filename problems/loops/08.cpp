#include <iostream>

int main() {
	int n;

	while (1) {
		std::cin >> n;
		if (n >= 100){
			break;
		}
	}

	std::cout << n << std::endl;
}
