#include <stdio.h>

int main() {
	int arr[10], n=10;

	for(int j = 0; j<n; ++j){
	    scanf("%d", &arr[j]);
	}
	int a = arr[n-1];
	 for(int i = n-1; i>=0; --i){
		 arr[i] = arr[i-1];
		}
	arr[0] = a;
	
	
    for(int k = 0; k<n; ++k){
		 printf("%d ", arr[k]);
		}
   
}


