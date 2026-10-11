#include <stdio.h>

int main() {
	int n = 10;
	int arr[10];


	for(int i=0; i<n; ++i){
	    scanf("%d", &arr[i]);
	}

    for(int i = 0; i<n; ++i){
        for(int j = i; j<=n-1; ++j){
            int temp;
            if(arr[i]%10 > arr[j]%10){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }

    }


    for(int k=0; k<n; ++k){
        printf("%d ", arr[k]);
    }
}

