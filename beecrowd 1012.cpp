#include <stdio.h>
 
int main() {
 double a, b, c, pi;
	double tri, circ, tra, quad, ret;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	pi=3.14159;
	tri=(a*c)/2;
	circ=pi*c*c;
	tra=(a+b)*c/2;
	quad=b*b;
	ret=a*b;
	
	printf("TRIANGULO: %.3lf\n", tri);
	printf("CIRCULO: %.3lf\n", circ);
	printf("TRAPEZIO: %.3lf\n", tra);
	printf("QUADRADO: %.3lf\n", quad);
	printf("RETANGULO: %.3lf\n", ret);
	
    return 0;
}
