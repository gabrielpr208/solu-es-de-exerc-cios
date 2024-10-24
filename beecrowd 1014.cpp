#include <stdio.h>
 
int main() {
int distancia;
	float gas, consumo;
	
	scanf("%d %f", &distancia, &gas);
	consumo=distancia/gas;
	printf("%.3f km/l\n", consumo);
	
    return 0;
}
