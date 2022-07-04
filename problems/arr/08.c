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

  int min_diff = abs(l[0] - l[1]);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;

      int bd = abs(l[i] - l[j]);
      if (bd < min_diff)
        min_diff = bd;
    }
  }

  printf("%d\n", min_diff);

  free(l);

  return 0;
}
