#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  int buff = 0;

  for (int i = 1; i <= n; i++) {
    buff += i * i;
  }

  printf("%d\n", buff);

  return 0;
}
