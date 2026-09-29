#include <stdio.h>

int middle(int a, int b)
{
    int mid = (a + b)/2;	

    return mid;	
}




int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int res = middle(a, b);
	printf("%d", res );
	
	
	return 0;
}

