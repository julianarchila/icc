#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  int sum = 0;

  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);
    sum += buff;
  }

  printf("%d\n", sum);
  printf("%d\n", sum / n);

  return 0;
}
