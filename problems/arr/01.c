#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);
    printf("%d\n", buff);
  }

  return 0;
}
