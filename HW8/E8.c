#include <stdio.h>

int main() {
	int arr[12], n=12;

	for(int j = 0; j<n; ++j){
	    scanf("%d", &arr[j]);
	}
	for(int i=0; i<=n/2; ++i){
		int temp;
		temp = arr[i];
		arr[i] = arr[n/4-i];
		arr[n/4-i] = temp;
		if(i==(n/4)/2) break;
		}
	
	for(int i=n/3; i<=(n/2 + n/8); ++i){
		int temp1;
		temp1 = arr[i];
		arr[i] = arr[n/2 + n/8 - i + n/3];
		arr[n/2 + n/8 - i + n/3] = temp1;
		if(i==(n/3+n/8)) break;
		}
		
	for(int i=n-n/3; i<n; ++i){
		int temp2;
		temp2 = arr[i];
		arr[i] = arr[n - i + n/2+1];
		arr[n - i + n/2+1] = temp2;
		if(i==(n-n/3+n/8)) break;
		}
		
		
    for(int k = 0; k<n; ++k){
		 printf("%d ", arr[k]);
		}
   
}


