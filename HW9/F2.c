
#include <stdio.h>

void sort_even_odd(int n, int a[]){
	int arr[n];
	int cnt=0;
	for(int i = 0; i<n; ++i){
       arr[i] = a[i];
       }
	for(int i = 0; i<n; ++i){
       if(arr[i] % 2 == 0){
		   a[cnt++] = arr[i];
		   };
       }
	for(int i = 0; i<n; ++i){
		if((arr[i] % 2 == 1) || (arr[i] % 2 == -1)){
		   a[cnt++] = arr[i];
		   };
		}
		
	}



 //int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int arr[n];
//	size_t size = sizeof(arr)/sizeof(arr[0]);
//	for(int i = 0; i<n; ++i){
//		scanf("%d", &arr[i]);
//		}
//	sort_even_odd(size, arr);
//	return 0;
//}

