
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int max_val, min_val;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	max_val = a;
	if (b > max_val) max_val = b;
	if (c > max_val) max_val = c;
	if (d > max_val) max_val = d;
	if (e > max_val) max_val = e;
	
	min_val = a;
	if (b < min_val) min_val = b;
	if (c < min_val) min_val = c;
	if (d < min_val) min_val = d;
	if (e < min_val) min_val = e;


			
    printf("%d", min_val + max_val);

	return 0;
}

