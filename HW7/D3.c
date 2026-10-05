
#include <stdio.h>

void func(int n){
    
	if(n<=0){
		return;
		} 
	printf("%d ", n%10);
	func(n/10);
	
	}



int main(void)
{
	int n;
	scanf("%d", &n);
	if(n==0) printf("%d", 0);
	func(n);
	
	return 0;
}

