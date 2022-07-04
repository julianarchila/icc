 #include <iostream>


int main() {
	int a, b;

	std::cin >> a;
	std::cin >> b;

	for (int i = a; i <= b; i++) {
		if(i % 5 == 0) {
			std::cout << i << std::endl;
		}
	}
}

