#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int *n, int *m) {
  scanf("%d", n);
  scanf("%d", m);

  int **matrix = (int **)calloc(*m, sizeof(int));

  for (int i = 0; i < *n; i++) {
    matrix[i] = (int *)calloc(*m, sizeof(int));
  }

  return matrix;
}

int main() { printf("%d\n", (int)sizeof(int **)); }
