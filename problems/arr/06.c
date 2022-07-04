#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int *l = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);
    l[i] = buff;
  }
  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);
    printf("%d\n", buff + l[i]);
  }

  free(l);
  return 0;
}

