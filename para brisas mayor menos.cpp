#include <stdio.h>
#include <string.h>

int main() {
    char pal1[100], pal2[100];
    int resultado;
   printf("primera palabra: "); scanf("%s", pal1);
   printf(" segunda palabra: "); scanf("%s", pal2);
    resultado = strcmp(pal1, pal2);
    if (resultado == 0) {
       printf("son iguales.\n");
    } else if (resultado > 0) {
      printf("palabra mayor es: %s\n", pal2);
      printf("palabra menor es: %s\n", pal1);
    } else {
       printf("palabra mayor es: %s\n", pal1);
      printf("palabra menor es: %s\n", pal2);
    }
    printf("su comparación es: %d\n", resultado);
    return 0;
}