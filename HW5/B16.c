#include <stdio.h>

int main(void)
{
	int a, b, max_val, min_val, ost;
	scanf("%d %d", &a, &b);
	if(a >=b) {
		max_val = a;
		min_val = b;
	}
	else {max_val = b;
		  min_val = a;
		
		}
	ost = max_val % min_val;
	
	while(max_val > ost) {
		if(max_val % min_val > 0)
		    ost = max_val % min_val;
		max_val = min_val;
		min_val = ost;
		
		
		
		}
	
	printf("%d", ost);
	
	
	
	return 0;
}

