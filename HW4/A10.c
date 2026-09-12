#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int min_val;
	
	min_val = a;
	if (b < min_val) min_val = b;
	if (c < min_val) min_val = c;
	if (d < min_val) min_val = d;
	if (e < min_val) min_val = e;
	printf("%d", min_val);
	
			
	return 0;
}
