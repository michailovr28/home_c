
#include <stdio.h>

int compression(int a[], int b[], int N){
	int k = 0;
	if(a[0]==1)
	 {
		b[k++] = 0;
	 }
	int sm = 1;
	for(int i = 0; i<N; i+=sm){
		sm = 1;
	    for(int j=i+1; j<N; ++j){
			if(a[i] == a[j]) 
			{
				sm += 1;
			}
			else break;}
	b[k++] = sm;
	
	
	}
	return k;
	}



//int main(void)
//{

//	int arr[100];
//	int brr[100];
//	int n = 0, x;
 //   while(scanf("%d",  &x) == 1){
//		arr[n] = x;
//		n++;
//		}
 //   compression(arr, brr, n);
    
//	return 0;}

