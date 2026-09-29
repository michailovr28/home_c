#include <stdio.h>


int factorial(int n)
{
    int res = 1;
    for(int i = 1; i<=n; ++i)
        res = res * i;
	

    return res;	
}




int main(void)
{
	int N;
	scanf("%d ", &N);
	int ress = factorial(N);
	printf("%d", ress);
	    
	
	
	return 0;
}

