
#include <stdio.h>
#include <string.h>

void count_ones(int n, int* sum) {
	if((n/2)==0){
		if((n % 2) ==1 ) {*sum = *sum + 1;
	} 
		return;
		}
	if((n % 2) ==1 ) {*sum = *sum + 1;
	}
	count_ones(n/2, sum);
	}

int main(void)
{
	int n, sum=0;
	scanf("%d", &n);
	count_ones(n, &sum);
    printf("%d", sum);
    
	return 0;
}

