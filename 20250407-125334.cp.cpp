#include <stdio.h>
#include<string.h>

int main() {
  char palabra[10];
    int longitud;
    
    printf("Ingresa letras: ");
    scanf("%s", palabra);
    
  longitud = strlen(palabra);
  
    for (int i=0; i < longitud;i++) {
     for( int j=0; j<longitud; j++){
         printf("*");
     }    
        printf("\n");
    }
    return 0;
}