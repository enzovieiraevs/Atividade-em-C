#include <stdio.h>

int main (){
	float salario, imposto;
	
	printf("Digite o salario:");
	scanf("&f", &salario);
	
	if (salario <= 2000) {
		imposto = 0;
	} else if (salario <= 4000) {
		imposto = salario * 0.10;
	} else {
		imposto = salario * 0.20;
	}
	
	printf ("Valor do imposto a ser pago: %.2f\n", imposto);
	
	
	
	
	
	
	
	return 0;
}
