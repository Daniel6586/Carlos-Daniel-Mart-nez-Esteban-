#include <stdio.h>

int main() {
    int N, suma =0;
    printf("Ingrese el número : ");
    scanf("%d",&N);
 for (int i=1;i<=N;i++){
    suma +=i;
    }
    printf ("la suma  %d da %d\n",N, suma );
    
    return 0;
}