

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, len=0, dig=0;
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
	
	
	for(int j = 0; j<len-1; ++j){
		int temp;
		for(int k = j +1; k<len; ++k){
			if(res[k] > res[j]){
				temp = res[j];
				res[j] = res[k];
				res[k] = temp;
				}
			
			}
		}
    for(int i=len-1; i>=0; --i){
		dig = dig + res[len - i - 1] * pow(10,i);
		}
	
	
	printf("%d ", dig);
	
	
	return 0;
}

