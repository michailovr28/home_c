

#include <stdio.h>

int main(void)
{
	int n, len=0;
	scanf("%d", &n);
	int k = n;
	while(k>0){
		len = len + 1;
		k = k / 10;
		}
	int res[len];
	
	for(int i = 0; i<len; ++i){
		res[i] = n % 10;
		n = n / 10;
		}
	for(int j = len-1; j>=0; --j){
		printf("%d ", res[j]);
		
		}
	
	
	
	return 0;
}

