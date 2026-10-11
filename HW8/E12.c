#include <stdio.h>

int main() {
	int n = 10;
	int arr[10];


	for(int i=0; i<n; ++i){
	    scanf("%d", &arr[i]);
	}

    for(int i = 0; i<n/2; ++i){
        for(int j = i; j<=n/2-1; ++j){
            int temp;
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


     for(int i = n/2; i<n; ++i){
        for(int j = i; j<=n-1; ++j){
            int temp;
            if(arr[i] < arr[j]){
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
