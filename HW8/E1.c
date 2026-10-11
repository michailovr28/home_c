#include <stdio.h>

int main() {
	int arr[5], sum=0, n=5;

	for(int i = 0; i<n; ++i){
	    scanf("%d", &arr[i]);
	    sum = sum + arr[i];

	}

    printf("%.3f", (float)sum/(float)n);
}

