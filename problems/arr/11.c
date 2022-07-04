#include <stdio.h>
#include <stdlib.h>

int appers(int *arr, int l, int n);
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
  int *arr1 = NULL;
  int arr1_l = 0;

  for (int i = 0; i < n; i++) {
    int buff;
    scanf("%d", &buff);

    if (appers(arr1, arr1_l, buff) == 0) {

      if (arr1 == NULL) {
        arr1 = malloc(sizeof(int));
      } else {
        arr1 = realloc(arr1, sizeof(arr1) + sizeof(int));
      }
      arr1[arr1_l] = buff;

      arr1_l++;
    }
  }

  // print_array(arr1, n);

  int m;
  scanf("%d", &m);

  int *arr2 = NULL;
  int arr2_l = 0;

  for (int i = 0; i < m; i++) {
    int buff;
    scanf("%d", &buff);

    if (appers(arr2, arr2_l, buff) == 0 && appers(arr1,arr1_l, buff ) == 0) {

      if (arr2 == NULL) {
        arr2 = malloc(sizeof(int));
      } else {
        arr2 = realloc(arr2, sizeof(arr2) + sizeof(int));
      }
      arr2[arr2_l] = buff;

      arr2_l++;
    }
  }

  int *arr = merge(arr1, arr1_l, arr2, arr2_l);
  int arr_length = arr1_l + arr2_l;
  sort_array(arr, arr_length);
  print_array(arr, arr_length);

  free(arr1);
  free(arr2);

  free(arr);
  return 0;
}

int appers(int *arr, int l, int n) {
  if (l == 0) {
    return 0;
  }
  int r = 0;
  for (int i = 0; i < l; i++) {
    if (arr[i] == n) {
      r = 1;
      break;
    }
  }
  return r;
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
