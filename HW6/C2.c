#include <stdio.h>

int power(int N, int P)
{
    int mult = 1;
    for(int i = 1; i<=P; ++i){
	    mult = mult * N;	
	
    }
    
    return mult;	
	
	
}




int main(void)
{
	int N, P;
	scanf("%d %d", &N, &P);
	printf("%d", power(N, P));
	
	
	return 0;
}

