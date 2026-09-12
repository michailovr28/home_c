
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max_val;
	
	max_val = a;
	if (b > max_val) max_val = b;
	if (c > max_val) max_val = c;
	printf("%d", max_val);
			
	return 0;
}

