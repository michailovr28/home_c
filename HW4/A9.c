
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int max_val;
	
	max_val = a;
	if (b > max_val) max_val = b;
	if (c > max_val) max_val = c;
	if (d > max_val) max_val = d;
	if (e > max_val) max_val = e;
	printf("%d", max_val);
			
	return 0;
}

