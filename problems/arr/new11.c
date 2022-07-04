#include <stdio.h>
#include <stdlib.h>

int *merge(int *arr1, int a1l, int *arr2, int a2l);
void sort_array(int *arr, int n);
void swap(int *xp, int *yp);
void print_array(int *arr, int l) {
  for (int i = 0; i < l; i++) {
    printf("%d\n", arr[i]);
  }
}

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int *arr1 = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);
    arr1[i] = buff;
  }

  int m;
  scanf("%d", &m);

  int *arr2 = malloc(sizeof(int) * m);

  for (int i = 0; i < m; i++) {
    int buff;
    scanf("%d", &buff);
    arr2[i] = buff;
  }

  int *arr = merge(arr1, n, arr2, m);
  int arr_length = n + m;
  sort_array(arr, arr_length);

  for (int i = 0; i < arr_length; i++) {
    for (int j = i + 1; j < arr_length; j++) {
      if (arr[i] == arr[j]) {
        for (int k = j; k < arr_length; k++) {
          arr[k] = arr[k + 1];
        }
        j--;
        arr_length--;
      }
    }
  }

  print_array(arr, arr_length);

  free(arr1);
  free(arr2);

  free(arr);
  return 0;
}

int *merge(int *arr1, int a1l, int *arr2, int a2l) {
  int *new_arr = malloc(sizeof(int) * (a1l + a2l));

  for (int i = 0; i < a1l; i++) {
    new_arr[i] = arr1[i];
  }

  for (int i = 0; i < a2l; i++) {
    new_arr[a1l + i] = arr2[i];
  }

  return new_arr;
}

void sort_array(int *arr, int n) {

  int i, j, min_idx;

  for (i = 0; i < n - 1; i++) {

    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    swap(&arr[min_idx], &arr[i]);
  }
}

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
