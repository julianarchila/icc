#include <iostream>

using namespace std;

int factorial(int n);

int main(int argc, char *argv[]) {
  int n;

  cin >> n;

  cout << factorial(n) << "\n" ;

  return 0;
}

int factorial(int n) {
  if (n == 1 || n < 1)
    return 1;

  return n * factorial(n - 1);
}
