#include <iostream>

using namespace std;

int is_p(int n);

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  if (is_p(n) == 1)
    cout << "true\n";
  else
    cout << "false\n";
  return 0;
}

int is_p(int n) {
  int c = 0;
  for (int i = 1; i <= n ; i++) {
    if (n % i == 0)
      c++;
  }

  if (c == 2)
    return 1;

  return 0;
}
