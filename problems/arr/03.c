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

  int min = l[0];
  int max = min;

  for (int i = 0; i < n; i++) {
    if (l[i] > max)
      max = l[i];

    if (l[i] < min)
      min = l[i];
  }

  printf("%d\n", max);
  printf("%d\n", min);

  free(l);
  return 0;
}
