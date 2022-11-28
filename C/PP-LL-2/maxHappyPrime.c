#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPrime(int number) {
  if (number % 2 == 0 && number != 2) {
    return false;
  }
  int divisions = 0;
  int counter = 2;
  while (counter < number) {
    if (number % counter++ == 0) {
      divisions++;
    }
    if (divisions >= 1) {
      return false;
    }
  }

  return true;
}

int getPowSum(int number) {
  char convertedNum[60];
  sprintf(convertedNum, "%d", number);

  int sum = 0;
  for (int i = 0; i < strlen(convertedNum); i++) {
    int current = convertedNum[i] - '0';
    sum += pow(current, 2);
  }
  return sum;
}

bool isHappy(int number) {
  int firstSum = getPowSum(number);
  if (firstSum == 1)
    return true;
  else {
    int curIndex = 1;
    int currentNum = firstSum;
    while (true) {
      int newSum = getPowSum(currentNum);
      if (newSum == 1) {
        return true;
      } else {
        if (curIndex >= 20)
          return false;
        currentNum = newSum;
        curIndex++;
      }
    }
  }
  return false;
}

int getHighestHappyPrime(int number) {
  for (int current = number; current > 0; current--) {
    if (isHappy(current) && isPrime(current)) {
      return current;
    }
  }

  return 0;
}


int main(void) {
  int n;
  printf("insert the value you want to test: ");
  scanf("%d", &n);
  int prime = getHighestHappyPrime(n);
  printf("the result is: %d", prime);
  return 0;
}