#include <stdio.h>
 
int main() {
char nome[20];
	double salf, venda, total;
	scanf("%s\n%lf\n%lf", nome, &salf, &venda);
	total = salf + 0.15 * venda;
	printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
