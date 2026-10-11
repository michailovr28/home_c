#include <stdio.h>

int main() {
	int arr[10],min, max, min_ind=0, max_ind=0, n=10;

	for(int i = 0; i<n; ++i){
	    scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];

	for(int j = 0; j<n; ++j){
	    if(arr[j] < min) {
	        min = arr[j];
	        min_ind = j;
	    }
	    if (arr[j] > max) {
	        max = arr[j];
	        max_ind = j;
	    };
	}

    printf("%d %d %d %d", max_ind+1, max, min_ind+1, min);
}
