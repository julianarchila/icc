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

  int max = l[0];
  int max_i = 0;

  for (int i = 0; i < n; i++) {
    if (l[i] > max) {
      max = l[i];
      max_i = i;
    }
  }
  int temp = l[n - 1];
  l[n - 1] = max;
  l[max_i] = temp;

  int s_max = l[0];
  for (int i = 0; i < n - 1; i++) {
    if (l[i] > s_max) {
      s_max = l[i];
    }
  }

  printf("%d\n", s_max);

  free(l);
  return 0;
}
