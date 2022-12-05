#include <stdio.h>

float plus(float * product, int size);

int main(void) {
  int N;
  printf("insert the total of member to determinate the product: ");
  scanf("%d", &N);
  float product[N];
  for(int i=0; i < N; i++) {
      printf("insert the value: " );
      scanf("%f", product+i);
  }
  printf("%g ", product[0]);
  for(int i = 1; i < N; i++){
      printf(" * %g ", product[i]);
  }
  printf("= %g\n", plus(product, N));
  return 0;
    
}

float plus(float *product, int size) {
  float p = 1;
  for (int i = 0; i < size; i++) {
    p *= product[i];
  }
  return p;
}