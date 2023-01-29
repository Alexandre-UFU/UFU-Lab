#include <stdio.h>

void initializeNumbers(int *values, int amountToCheck, int *max, int *min);
void printNumbers(int *values, int amountToCheck, int max, int min);

int main(void) {
  int amountToCheck;
  printf("Enter the amount you wish verify: ");
  scanf("%d", &amountToCheck);
  int allValues[amountToCheck];
  int max = 0, min = 0;
  initializeNumbers(allValues, amountToCheck, &max, &min);

  printNumbers(allValues, amountToCheck, max, min);
  return 0;
}

void initializeNumbers(int *values, int amountToCheck, int *max, int *min) {
  for (int index = 0; index < amountToCheck; index++) {
    printf("Enter the amount: ");
    scanf("%d", &values[index]);
    if (index == 0) {
      *max = values[index];
      *min = values[index];
    } else if (values[index] > *max) {
      *max = values[index];
    } else if (values[index] < *min) {
      *min = values[index];
    }
  }
}

void printNumbers(int *values, int amountToCheck, int max, int min) {
  for (int i = 0; i < amountToCheck; i++) {
    printf(" %d", values[i]);
    if (values[i] == max) {
      printf(">");
    }
    if (values[i] == min) {
      printf("<");
    }
  }
}