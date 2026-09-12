
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (c + b > a) && (c + a > b))
	    printf("YES");
	else printf("NO");
	    
	    
	return 0;
}

