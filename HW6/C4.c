#include <stdio.h>

int func(int x)
{
    int y;
    if((x>=-2) && (x<2)) y=x*x;
    if(x>=2) y=x*x + 4*x + 5; 	
    if(x<-2) y=4; 

    return y;	
}




int main(void)
{
	int a, max=0;
	while((scanf("%d", &a) == 1) && (a!=0))
	    if(func(a) > max) max=func(a);
	
	printf("%d", max);
	    
	
	
	return 0;
}

