#include <stdio.h>

int main(void)
{
	int a, sum=0, mult=1;
	scanf("%d", &a);
	for(int i = 10; i<=a; ++i) {
		int b = i;
	    while(b>0) {
		    sum = sum + (b%10);
		    mult = mult * (b%10);
		    b = b / 10;
		}
	    if(sum==mult) printf("%d ", i);
	    sum = 0;
	    mult = 1;
	
		}
	
	
	return 0;
}

