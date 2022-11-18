#include <stdio.h>
#include <stdlib.h>

int pseudo(int list[], int n){

   for(int i=0; i<n-1; i++){
      int  min = i;
       
       for(int j=i+1; j<n; j++){
	   if(list[j] < list[min]){
		   min = j;
	   }
       }
       if(min !=i){
	  swap(&list[min], &list[i]);
       }
   }
}

int swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main(){
   int n=0;
   printf("Ingresa la cantidad de numeros: "); 
   scanf("%d",&n);
   int list[n];	
   for(int i=0; i<n; i++){
      printf("ingresa el numero %d: ",i);
      scanf("%d",&list[i]);
   }
	
   printf("\nNumeros antes del ordenamiento: ");
   for(int i=0; i<n; i++){
       printf("%d, ",list[i]);
   }

   pseudo(list, n);
   printf("\nNumeros despues del ordenamiento: ");
   for(int i=0; i<n; i++){
       printf("%d, ", list[i]);
   }
   printf("\n");
   return 0;
}
