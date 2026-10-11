#include <stdio.h>

int main() {
	int n = 12;
	int arr[12], save[4];


	for(int i=0; i<n; ++i){
	    scanf("%d", &arr[i]);
	}

	size_t len_save = sizeof(save)/sizeof(save[0]);
	for(int i=0; i<len_save; ++i){
	    save[i] = arr[i+8];
	}


	for(int i=0; i<4; ++i){
	    for(int j=n-1; j>=0; --j){
	        arr[j] = arr[j-1];
	    }
	}

	for(int i=0; i<len_save; ++i){
	    arr[i] = save[i];
	}


    for(int k=0; k<n; ++k){
        printf("%d ", arr[k]);
    }
}

