#include <stdio.h>

int main(int argc, char *argv[]) {
  int buff = 0;
  int sum = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &buff);
    if (buff < 0) {
      sum += sum;
    }
  }

  printf("%d\n", buff);
  return 0;
}
