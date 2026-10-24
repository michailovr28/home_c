
//#include <stdio.h>

void sort_array(int size, int a[]){
	for(int i = 0; i<size-1; ++i){
		int temp = 0;
	    for(int j = i+1; j<size; ++j){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				}
			}
	}
	}



//int main(int argc, char **argv)
//{
//	int n;
//	scanf("%d", &n);
//	int arr[n];
//	size_t size = sizeof(arr)/sizeof(arr[0]);
//	for(int i = 0; i<n; ++i){
//		scanf("%d", &arr[i]);
//		}
//	sort_array(size, arr);
//	return 0;
//}

