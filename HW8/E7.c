#include <stdio.h>

int main() {
	int arr[10], n=10;

	for(int j = 0; j<n; ++j){
	    scanf("%d", &arr[j]);
	}
	for(int i=0; i<=n/2; ++i){
		int temp;
		temp = arr[i];
		arr[i] = arr[n/2-1-i];
		arr[n/2-1-i] = temp;
		if(i==(n/2)/2) break;
		}
	
	for(int i=n/2; i<=n-1; ++i){
		int temp1;
		temp1 = arr[i];
		arr[i] = arr[n/2 + (n-i-1)];
		arr[n/2 + (n-i-1)] = temp1;
		if(i==((n/2)+(n/2)/2)) break;
		}
		
		
    for(int k = 0; k<n; ++k){
		 printf("%d ", arr[k]);
		}
   
}


