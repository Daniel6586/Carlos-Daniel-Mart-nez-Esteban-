#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int main() {
  int num;
  printf("Ingrese un número entero : ");
  scanf("%d", &num);
  if (num < 0) {
    printf("El factorial no está definido para números negativos.\n");
  } else {
    printf("El factorial de %d es %d\n", num, factorial(num));
  }
  return 0;
}