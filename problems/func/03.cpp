#include <iostream>

using namespace std;

int fibbo(int n);

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  cout << fibbo(n) << "\n";

  return 0;
}

int fibbo(int n) {
  if (n <= 1)
    return n;

  return fibbo(n - 1) + fibbo(n - 2);
}
