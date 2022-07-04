#include <stdio.h>
#include <stdlib.h>

int appers(int *arr, int l, int n);

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int *l = calloc(n, sizeof(int));
  int found_0 = 0;

  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);

    if (buff == 0 && found_0 != 0) {
      printf("%d\n", buff);
      found_0 = 1;
    }

    if (appers(l, n, buff) == 0 && buff != 0) {
      printf("R: %d\n", buff);
    }
    l[i] = buff;

  }

  free(l);
  return 0;
}

int appers(int *arr, int l, int n) {
  printf("Looking for %d ....\n", n);
  int r = 0;
  for (int i = 0; i < l; i++) {
    printf("l[%d] = %d\n", i, arr[i]);
    if (arr[i] == n) {
      r = 1;
      break;
    }
  }
  printf("Done searching....\n");
  return r;
}
