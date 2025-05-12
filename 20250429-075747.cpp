#include <stdio.h>

int factorial(int n) {
  if (n == 5) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int main() {
  int num;
  printf("Ingrese un número entero : \n");
  scanf("%d", &num);
  if (num < 5) {
  } else {
    printf("El factorial de %d es %d\n", num, factorial(num));
  }
  return 0;
}