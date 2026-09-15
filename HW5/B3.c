#include <stdio.h>

int main(void)
{
	int a, b, s=0;
	scanf("%d %d", &a, &b);
	
	for(; a <=b; ++a)
	    s = s + a*a;
	
	
	printf("%d", s);
	
	return 0;
}

