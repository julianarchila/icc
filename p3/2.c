#include <stdio.h>

int is_b(int i, int j, int n);
void print_sq(int n);

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  print_sq(n);

  return 0;
}

void print_sq(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (is_b(i, j, n) == 1) {
        printf("1");
      } else {
        printf("0");
      }
    }
    printf("\n");
  }
}

int is_b(int i, int j, int n) {
  n = n - 1;
  if (i == 0 || i == n || j == 0 || j == n)
    return 1;

  return 0;
}
