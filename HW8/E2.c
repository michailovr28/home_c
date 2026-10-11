#include <stdio.h>

int main() {
	int arr[5],min, n=5;

	for(int i = 0; i<n; ++i){
	    scanf("%d", &arr[i]);
	}

	min = arr[0];

	for(int j = 0; j<n; ++j){
	    if(arr[j] < min) {
	        min = arr[j];
	    };
	}

    printf("%d", min);
}

