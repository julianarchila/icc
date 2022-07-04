#include <stdio.h>
#include <stdlib.h>

/*
 * Allocate memory for a 2d array
 * of size (l*2 + 1) X (1,2,3,...,n,n,..., 3,2,1)
 */
int **create_2darray(int n);

/*
 * Reads values from std input and fills the array.
 */
void fill_2darray(int **arr2d, int n);
/*Allocate memory for an array of size l*/
int *create_array(int n);
/*print 2d array to std output*/
void print_2darray(int **arr2d, int l);
/* print array to std output*/
void print_array(int *arr, int l);
/*Creates an array with the sum of the columns of a 2d array*/
int *sum_of_col(int **arr2d, int l);

void free_array2d(int ** arr2d, int n);

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  int **arr2d = create_2darray(n);
  fill_2darray(arr2d, n);
  printf("-----------------\n");
  print_2darray(arr2d, n);

  free_array2d(arr2d, n);

  return 0;

  
}

int **create_2darray(int n) {
  int length = 2 * n + 1;
  int **arr2d = malloc(sizeof(int *) * length);

  for (int i = 0; i < n; i++) {
    arr2d[i] = malloc(sizeof(int) * (i + 1));
    arr2d[length - 1 - i] = malloc(sizeof(int) * (i + 1));
  }

  arr2d[n] = malloc(sizeof(int) * n);

  return arr2d;
}

void fill_2darray(int **arr2d, int n) {

  int l = 2 * n + 1;

  // Read initial values
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (i + 1); j++) {
      int buff;
      scanf("%d", &buff);
      arr2d[i][j] = buff;
    }
  }

  // sumc = sum of columns
  int *smc = sum_of_col(arr2d, n);

  // put values into 2d array
  for (int i = 0; i < n; i++) {
    arr2d[n][i] = smc[i];
  }

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < (i + 1); j++) {
      arr2d[l - i - 1][j] = -1 * arr2d[i][j];
    }
  }
}

int *create_array(int l) {
  int *arr = calloc(l, sizeof(int));
  return arr;
}

void print_2darray(int **arr2d, int n) {
  int l = 2 * n + 1;
  for (int i = 0; i < l; i++) {
    if (i < l / 2) {
      for (int j = 0; j < (i + 1); j++) {
        printf("%d\t", arr2d[i][j]);
      }

    } else if (i > n) {
      for (int j = 0; j < (l - i); j++) {
        printf("%d\t", arr2d[i][j]);
      }
    } else {
      for (int j = 0; j < n; j++) {
        printf("%d\t", arr2d[i][j]);
      }
    }

    printf("\n");
  }
}

void print_array(int *arr, int l) {
  for (int i = 0; i < l; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}

int *sum_of_col(int **arr2d, int n) {
  int *sum = create_array(n);
  int l = 2 * n + 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (i + 1); j++) {
      sum[j] += arr2d[i][j];
    }
  }
  return sum;
}

void free_array2d(int ** arr2d, int n){
  int length = 2 * n + 1;

  for (int i = 0; i < n; i++) {
    free(arr2d[i]);
    free(arr2d[length - 1 - i]);
  }

  free(arr2d[n]); 
  free(arr2d);
}
