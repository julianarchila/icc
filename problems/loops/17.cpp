#include <iostream>

int main(int argc, char *argv[]) {
  int n;

  std::cin >> n;

  int c = 0;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0)
      c++;
  }

  printf(c == 2 ? "Primo\n" : "No primo\n");

  return 0;
}
