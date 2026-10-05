
#include <stdio.h>
#include <string.h>

void func(int n, int* i, int* k) {
	if(*k>=n){
		return;
		}
	for(int j=1; j<=*i; ++j){
		  printf("%d ", *i);
		  (*k)++;
		  if(*k==n) return;
		  
		}
	
	(*i)++;
	func(n, i, k);
		
	
	}
	

int main(void)
{
	int n, i=1, k=0;
	scanf("%d", &n);
	if(n==1) printf("%d", 1);
	else{ func(n, &i, &k);}
	
    
	return 0;
}

