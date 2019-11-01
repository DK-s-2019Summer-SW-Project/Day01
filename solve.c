#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	double a;
	printf("insert a double type number: ");
	scanf_s("%lf", &a);

	printf("Áö¼ö type is %e", a);

	return 0;
}

int main()
{
	char b;
	printf("insert a letter: ");
	scanf_s("%c", &b);
	printf("The ASC code of the letter is %d", b);
	return 0;
}

int main()
{
	double t, state;
	state = 76.587;
	printf("%lf", t + state);

	return 0;
}

int main()
{
	int a;
	double c;
	printf("insert the number: ");
	scanf_s("%d", &a);
	c = 3.3058;

	printf("The converted number is : %lfm\n", a*c);
	return 0;
}