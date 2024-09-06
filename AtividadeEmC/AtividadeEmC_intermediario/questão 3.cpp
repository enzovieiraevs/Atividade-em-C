#include <stdio.h>

int main (){
	
	int n1, n2, n3;
	
	   printf ("Digite o valor do primeiro numero:");
	   scanf ("%d", &n1); 
	   
	   printf ("Digite o valor do segundo numero:");
	   scanf ("%d", &n2); 
	   
	   printf ("Digite o valor do terceiro numero:");
	   scanf ("%d", &n3); 
	
	  int maior = n1;
	  
	  if (n2 > maior) {
	  	maior = n2;
	  }  
	  
	   if (n3 > maior) {
	  	maior = n3;
	  }  
	
	printf ("O maior numero e: %d\n", maior);
	
	
	
	
	
	return 0;
}
