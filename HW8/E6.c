#include <stdio.h>

int main() {
	int arr[12], sum=0, n=12;

	for(int i = 0; i<n; ++i){
	    scanf("%d", &arr[i]);
	    sum = sum + arr[i];

	}

    printf("%.2f", (float)sum/(float)n);
}


