#include<stdio.h>
#define _CRE_SECURE_NO_WARNNINGS

int main()
{
	double  celsius, fahrenheit;
	printf("Faherenheit: ");
	scanf_s("%lf", &fahrenheit);

	celsius = (fahrenheit - 32.0)*5.0 / 9.0;

	printf("%lf\n", celsius);
	
	return 0;
}