#include <stdbool.h>
#include <stdio.h>

int main() {
  int amount;

  scanf("%d", &amount);
  int nCurrent = 0;
  int nPrevious = 0;

  for (int index = 0; index < amount; index++) {
    if (index == 0) {
      printf("%d, ", index);
    } else if (index == 1) {
      nPrevious = 0;
      nCurrent = 1;
      printf("%d, ", index);
    } else {
      int sum = nPrevious + nCurrent;
      printf("%d, ", sum);
      nPrevious = nCurrent;
      nCurrent = sum;
    }

    bool loopFinal = (index + 1) == amount;
    if (loopFinal) {
      printf("...");
    }
  }
}
