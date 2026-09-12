
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int max_val = (a>b) ? a : b;
	int min_val = (a<b) ? a : b;
	
	printf("%d %d", min_val, max_val); 
	
	
	return 0;
}

