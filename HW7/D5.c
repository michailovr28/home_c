
#include <stdio.h>

void func(int num){
    
	if(num<=0){
		return;
		}	
	func(num/2);
	printf("%d", num%2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	if(n==0) printf("%d", 0);
	func(n);
	
	return 0;
}

