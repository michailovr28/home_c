#include <stdio.h>


int func(int a[][5]){
	
	int sum = 0, num = 0;
	for(int i = 0; i<5; ++i){
		sum += a[i][i];
			}
	double av = sum / 5;
	
	for(int i = 0; i<5; ++i){
		for(int j = 0; j<5; ++j){
			if(a[i][j] > av){
				num += 1;
				}
			}
		}
	
			
	return num;
	
	}




int main() {
	int   x;
	int arr[5][5];
	for(int i=0; i<5; ++i){
		for(int j = 0; j<5; ++j){
			scanf("%d ", &x);
			arr[i][j] = x ;
			}
		}
	

   int res = func(arr);
   printf("%d ", res);
  return 0;
}
