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

  int x;
  scanf("%d", &x);

  for (int i = 0; i < n; i++){
    if (l[i] == x)
    printf("%d\n", i+1);
  }

  free(l);
  return 0;
}

