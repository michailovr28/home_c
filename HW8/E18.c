

#include <stdio.h>

int main(void)
{
	int n;
	int d[8] = {0};
	scanf("%d", &n);
	for(int i = 2; i<=n; ++i){
		for(int j=0; j<=7; ++j){
			if(i%(j+2)==0){
				d[j] = d[j] + 1;
				}
			}}
	for(int j=0; j<=7; ++j){
		printf("%d %d\n", j+2, d[j]);
		}
	
	return 0;
}

