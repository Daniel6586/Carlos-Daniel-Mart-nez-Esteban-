#include <stdio.h>
   struct CD{
    char titulo[100];
    char artista[50];
    int num_canciones;
    int anio;
    float precio;
};
  int main()
  {
  struct CD cd1;
   printf ("ingresa el titulo:\n");
   scanf ("%s",&cd1.titulo);
   
   printf("ingresé el artrista:\n");
   scanf("%s",&cd1.artista);
   
   printf("ingrese el num_canciones:\n");
   scanf("%s",&cd1.num_canciones);
   
   printf("ingrese el anio:\n");
   scanf("%s",&cd1.anio);
   
   
  return 0;
}