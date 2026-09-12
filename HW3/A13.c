#include <stdio.h>

int main(int argc, char **argv)
{
	int abc, a, b, c;
	scanf("%d", &abc);
	c = abc % 10;
	b = abc / 10 % 10;
	a = abc/100;
	printf("%d", a * b * c);
	
	
	return 0;
}

