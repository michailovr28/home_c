
#include <stdio.h>
#include <string.h>

void sum_digits(int n, int* sum) {
	if(n<=0){
		return;
		}
	*sum = *sum + (n%10);
	sum_digits(n/10, sum);
	
	}


int main(void)
{
	int n, sum=0;
	scanf("%d", &n);
	sum_digits(n, &sum);
	printf("%d", sum);
	
    
	return 0;
}

