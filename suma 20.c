#include <stdio.h>

int main() {
    int N;
    int suma =0;
    
    printf("Ingresa el num: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    printf("La suma es de los numeros es: ");
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf("+");
        }
    }
    printf("= %d\n", suma);
    
    return 0;
}

