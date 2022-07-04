#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);
    if (buff < 0)
      printf("%d\n", buff);
  }

  return 0;
}
