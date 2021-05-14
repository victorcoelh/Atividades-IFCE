#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void zerador(int *m);
void preenchedor(int *m);
void imprimidor(int *m);

int main(){
   int matriz[10][10];

   zerador(matriz);
   imprimidor(matriz);
   printf("\n");
   preenchedor(matriz);
   imprimidor(matriz);

   return 0;
}

void zerador(int *m){
   for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
           m[j] = 0;
       }
       m += sizeof(int) * 10;
   }
}

void imprimidor(int *m){
   for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
           printf("%d|", m[j]);
       }
       printf("\n");
       m += sizeof(int) * 10;
   }
}

void preenchedor(int *m){
   for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
           m[j] = 100 - (j + 1 + (i * 10));
       }
       m += sizeof(int) * 10;
   }
}
