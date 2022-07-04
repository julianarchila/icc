#include <iostream>
using namespace std;

void read_array(int *arr, int l);
void print_sum(int *arr, int l);

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  int *arr = (int *)malloc(sizeof(int) * n);
  read_array(arr, n);
  print_sum(arr, n);

  free(arr);
  return 0;
}

void read_array(int *arr, int l) {
  for (int i = 0; i < l; i++) {
    int buff;
    cin >> buff;
    arr[i] = buff;
  }
}

void print_sum(int *arr, int l) {
  for (int i = 0; i < l / 2; i++) {
    cout << arr[i] + arr[l - 1 - i] << "\n";
  }
  if (l % 2 != 0) {

    cout << arr[(l / 2)] << "\n";
  }
}
