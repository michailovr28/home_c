#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, i=0, res = 0;
	scanf("%d", &a);
	b = a;
	
	while(a>0) {
		++i;
		a = a /10;
	}
	
	while(b>0){
	    int c = b % 10;
	    res = res + c * pow(10,i-1);
	    --i;	
	    b = b / 10;
	    
    }
	printf("%d", res);
	
	return 0;
}

