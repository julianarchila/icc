#include <stdio.h>

int sum_of_n(int n);

int main(){
	int n;
	scanf("%d", &n);

	int sum = sum_of_n(n);
	printf("%d\n", sum);

} 

int sum_of_n(int n){
	if (n == 1) 
		return 1;

	return n + sum_of_n(n - 1);
}
