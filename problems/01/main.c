#include <stdio.h>


int sum_of_n(int n);


int main() {
	int buff;
	printf("Enter a number: ");
	scanf("%d", &buff);
	printf("Sum of %d is %d\n", buff, sum_of_n(buff));
	return 0;
}


int sum_of_n(int n){
	if (n == 1) {
		return 1;
	}

	return n + sum_of_n(n - 1);
}
