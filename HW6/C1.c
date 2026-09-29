#include <stdio.h>

int modul(int a)
{
    return (a<0) ? -a : a;	
	
	
}




int main(void)
{
	int n;
	scanf("%d", &n);
	n = modul(n);
	printf("%d", n);
	
	
	return 0;
}

