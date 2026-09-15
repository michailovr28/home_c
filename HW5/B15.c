#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, i = 0;
	
	while((scanf("%d", &a) == 1) &&(a!=0)) {
	    if(a % 2 == 0)
	        ++i;
	}
    
    printf("%d", i);
	
	
	
	
	
	return 0;
}

