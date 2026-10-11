#include <stdio.h>

int main() {
	int arr[10], n=10;

	for(int i = 0; i<n; ++i){
	    scanf("%d", &arr[i]);
	}

	for(int i = 0; i<n-1; ++i){
	    for(int j = i+1; j<n; ++j){
	    int temp;
	    if (arr[j] > arr[i]) {
	        temp = arr[i];
	        arr[i] = arr[j];
	        arr[j] = temp;
	    };
	} }

    printf("%d", arr[0] + arr[1]);
}

