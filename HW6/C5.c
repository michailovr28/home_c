#include <stdio.h>

int sum(int x)
{
    int sum=0;
    for(int i=1; i<=x; ++i)
        sum = sum + i;

    return sum;	
}




int main(void)
{
	int a;
	scanf("%d", &a);
	
	
	printf("%d", sum(a));
	    
	
	
	return 0;
}

