
#include <stdio.h>

void func(int n, int *sum){
	if(n<=0){
		return;
		}
	*sum=*sum+n; 
	func(n-1, sum);
	}



int main(void)
{
	int n, sum=0;
	scanf("%d", &n);
	func(n, &sum);
	printf("%d", sum);
	
	return 0;
}

