#include <iostream>
using namespace std;

int factorial(int n);
int long comb(int n, int x);

int main(int argc, char *argv[]) {
  int n, x;
  cin >> n;
  cin >> x;

  int long r = comb(n, x);
  cout << r << "\n";

  return 0;
}

int long comb(int n, int x) {
  int long nf = factorial(n);
  int long xf = factorial(x);
  int n_xf = factorial(n - x);
  // cout << "nf: " << nf << "\n";
  // cout << "xf: " << xf << "\n";
  // cout << "n_xf: " << n_xf << "\n";
  return nf / (xf * n_xf);
}

int factorial(int n) {
  int buff = 1;

  for (int i = 1; i <= n; i++) {
    buff *= i;
  }
  return buff;
}
