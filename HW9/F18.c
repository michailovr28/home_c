#include <stdio.h>


int func(int a[][10]){
	
	int sum = 0;
	for(int i = 0; i<10; ++i){
		int mx = a[i][0];
		for(int j = 0; j<10; ++j){
			if(a[i][j] > mx){
				mx = a[i][j];
				}
			}
		
		sum += mx;
			}
			
	return sum;
	
	}




int main() {
	int   x;
	int arr[10][10];
	for(int i=0; i<10; ++i){
		for(int j = 0; j<10; ++j){
			scanf("%d ", &x);
			arr[i][j] = x ;
			}
		}
	

   int res = func(arr);
   printf("%d ", res);
   return 0;
}
