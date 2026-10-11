#include <stdio.h>

int main() {
	int arr[10], n=10, sum=0;

	for(int i = 0; i<n; ++i){
	    scanf("%d", &arr[i]);
	    if (arr[i] > 0){
	        sum = sum + arr[i];

	    }
	}



    printf("%d", sum);
}

