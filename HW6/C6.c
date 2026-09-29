#include <stdio.h>
#include <math.h>

unsigned long long get_zerno(int k)
{
    unsigned long long res = pow(2, (k-1));

    return res;	
}




int main(void)
{
	int a;
	scanf("%d", &a);
	
	printf("%llu", get_zerno(a));
	    
	
	
	return 0;
}

