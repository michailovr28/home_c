#include <stdio.h>

int main() {
	int n = 10, len=0;
	int arr[10];


	for(int i=0; i<n; ++i){
	    scanf("%d", &arr[i]);
	    if(arr[i]/10%10==0){
	        len = len + 1;
	    }
	}

	int res[len];
	int *p = res;


	for(int i=0; i<n; ++i){
	     if((arr[i]/10)%10==0) {
			 *p = arr[i];
			  p++;}
		
	}


    for(int k=0; k<len; ++k){
        printf("%d ", res[k]);
    }
}
