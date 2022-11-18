#include <stdio.h>
#include <stdlib.h>

int list[0];
int pseudo(int list[], int n){
   int min=0;
   int indexMin=0;

   for(int i=0; i<n-1; i++){
       min = i;
       
       for(int j=i+1; j<n; j++){
	   if(list[j] < list[min]){
		   min = j;
	   }
       }
       if(indexMin !=i){
	  swap(&list[min], &list[i]);
       }
   }
}

int swap(int *x, int *y){
   int temp = *x;
   *x = *y;
   *y = temp;
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
