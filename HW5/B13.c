#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, chet=0, nechet=0;
	scanf("%d", &a);
	
	while(a>0) {
		if(a % 10 % 2 == 0)
		    ++chet;
		else ++nechet;
		a = a / 10;	

    }
    
    printf("%d %d", chet, nechet);
	
	
	
	
	
	return 0;
}

