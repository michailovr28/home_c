
#include <stdio.h>

int func(int a[], int N){
	long long sm=0;
	for(int i = 0; i<N; ++i){
		sm = sm + a[i];
		
		}
		
	return sm;
}




int main(void)
{

	int arr[1000];
	int n = 0, x, max = 0, min = 1000;
	long long s = 0;
    while(scanf("%d",  &x) == 1){
		if(x==0) 
		{
		  break;
		}
		if(x > max) {
			max = x;
			}
		if(x < min) {
			min = x;
			}
		
		arr[n] = x;
		n++;}
	for(int i = min; i<=max; ++i){
		s = s + i;}
		
    int sm = func(arr, n);
    printf("%lld", s - sm);
        
	return 0;}
