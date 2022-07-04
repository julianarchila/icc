#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int r, int c);

void freeMatrix(int **matr, int c);

void fillMatrix(int **matr, int r, int c);

void printSumMatrix(int **matr, int **matr2, int r, int c);

int main(int argc, char *argv[]) {
  int r, c;
  scanf("%d", &r);
  scanf("%d", &c);

  int **matr = createMatrix(r, c);
  int **matr2 = createMatrix(r, c);
  fillMatrix(matr, r, c);
  fillMatrix(matr2, r, c);

  printSumMatrix(matr, matr2, r, c);

  freeMatrix(matr, r);
  freeMatrix(matr2, r);
  return 0;
}

int **createMatrix(int r, int c) {
  int **arr = malloc(sizeof(int *) * r);

  for (int i = 0; i < r; i++) {
    arr[i] = malloc(sizeof(int) * c);
  }

  return arr;
}

void freeMatrix(int **matr, int r) {
  for (int i = 0; i < r; i++) {
    free(matr[i]);
  }

  free(matr);
}

void fillMatrix(int **matr, int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int buff;
      scanf("%d", &buff);
      matr[i][j] = buff;
    }
  }
}

void printSumMatrix(int **matr, int **matr2, int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", matr[i][j] + matr2[i][j]);
    }
    printf("\n");
  }
}
