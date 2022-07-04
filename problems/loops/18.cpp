#include <iostream>

int main(int argc, char *argv[]) {
  int n;

  std::cin >> n;

  int c = 0;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0)
      c++;
  }

  printf(c == 0 ? "No compuesto\n" : "Compuesto\n");

  return 0;
}
