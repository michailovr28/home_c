#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, max_val, min_val;
	scanf("%d", &a);
	min_val = a % 10;
	max_val = a % 10;
	a = a / 10;
	
	while(a>0){
	    int c = a % 10;
	    if(c > max_val)
	        max_val=c;
	    if (c < min_val)
	        min_val=c;
	    a = a / 10;
	    
		
    }
    
    
    printf("%d %d", min_val, max_val);
	
	
	
	
	
	return 0;
}

