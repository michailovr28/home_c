
#include <stdio.h>
#include <string.h>

void func_up(int a, int b){
	if(a > b){
		return;
		}
	printf("%d ", a);
	func_up(a+1, b);
	
	}

void func_down(int a, int b){
	if(a < b){
		return;
		}
	printf("%d ", a);
	func_down(a-1, b);
	
	
	}






int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	if(A<B) func_up(A, B);
	else func_down(A, B);
	
    
	return 0;
}

