
//#include <stdio.h>

int find_max_array(int size, int a[]){
	
	int max = a[0];
	for(int i = 0; i<size; ++i){
	    if(a[i] > max) {
			max = a[i];
			}
	}
	return max;
	}



//int main(void)
//{

//	int arr[1000];
//	int n = 0, x;
 //   while(scanf("%d",  &x) == 1){
//		arr[n] = x;
//		n++;
//		}
//    int mx = find_max_array(n, arr);
 //   printf("%d", mx);
 //   
//	return 0;
//}

