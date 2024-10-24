#include <stdio.h>
 
int main() {
 int codigo1, npecas1, codigo2, npecas2;
	double preco1, preco2, valor;
	
	scanf("%d %d %lf", &codigo1, &npecas1, &preco1);
	
	scanf("%d %d %lf", &codigo2, &npecas2, &preco2);
	
	valor= npecas1 * preco1 + npecas2 * preco2;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", valor);

    return 0;
}
