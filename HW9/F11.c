#include <stdio.h>
#include <string.h>

void func(int size, int arr[], int res[])

{
    int ind1=0, ind2 = 1;
    int minsm = arr[0] + arr[1];
    for(int i = 0; i<size-1; ++i)
    {
     for(int j=i+1; j<size; ++j){
         if((arr[i] + arr[j]) < minsm){
             minsm = arr[i] + arr[j];
             ind1 = i;
             ind2 = j;


         }

     }
    }
 res[0] = ind1;
 res[1] = ind2;
}




int main() {
	int n = 30;
	int arr[n];
	int res[2];
	for(int i=0; i<n; ++i){
	    scanf("%d ", &arr[i]);
	}
    func(n, arr, res);
    for(int k=0; k<2; ++k){
	    printf("%d ", res[k]);}


return 0;
}


