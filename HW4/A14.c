
#include <stdio.h>

int main(void)
{
	int abc, a, b, c;
	scanf("%d", &abc);
	c = abc % 10;
	b = abc / 10 % 10;
	a = abc / 100;
	int max_val;
	
	max_val = a;
	if (b > max_val) max_val = b;
	if (c > max_val) max_val = c;
	printf("%d", max_val);
			
	return 0;
}

