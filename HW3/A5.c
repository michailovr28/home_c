#include <stdio.h>

int main(void)
{
	int a, b, c;
	double aver;
	scanf("%d %d %d", &a, &b, &c);
	aver = (double)(a + b + c) / 3;
	printf("%.2f", aver);
	
	return 0;
}

