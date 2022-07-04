#include <stdio.h>
#include <string.h>
// #include <unistd.h>

int main(int argc, char *argv[]) {
  float a, b;

  scanf("%f", &a);
  scanf("%f", &b);

  float buff = (a + b) / 2;
  printf("%.6f\n", buff);


  // float nl = std::pow(10, -6);
  // std::cout << nl << std::endl;


  char str_buff[100];
  char * nl = "-0.00001";
  sprintf(str_buff, "%.6f", buff);

  while (strcmp(str_buff, nl) != 0) {
    buff = buff / 2;

    // std::cout << buff << std::endl;
    printf("%.6f\n", buff);
    sprintf(str_buff, "%.6f", buff);
    // sleep(1);
  }


}
