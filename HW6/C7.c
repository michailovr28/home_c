#include <stdio.h>
#include <math.h>

int func(int N, int P)
{
    int i = 0;   
    int res = 0; 
    while(N > 0){
	    int ost = N % P;
	    N = N / P;	
	    res = res + ost * pow(10, i);
	    ++i;
	    
		
	}

    return res;	
}




int main(void)
{
	int N, P;
	scanf("%d %d", &N, &P);
	int res = func(N, P);
	printf("%d", res);
	    
	
	
	return 0;
}

