#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *YES = "YES";
  int counter = 0;

  while (1) {
    char word[100];
    fgets(word, sizeof(word), stdin);

    if (strncmp(word, YES, 3) == 0) {
      counter += 20;
    } else {
      break;
    }
  }

  for (int i = 1; i <= counter; i++) {
    printf("%d\n", i);
  }

  return 0;
}
