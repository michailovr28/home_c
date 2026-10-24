//#include <stdio.h>
//#include <string.h>

void change_max_min(int size, int a[])
{
    int min = a[0], max = a[0], indmx = 0, indmn = 0;
    for(int i=0; i<size; ++i){
			if(a[i] > max){
				max = a[i];
				indmx = i;
				}
			if(a[i] < min){
				min = a[i];
				indmn = i;
				}
			}
	 int temp;
	 temp = a[indmn];
	 a[indmn] = a[indmx];
	 a[indmx] = temp;
    
}


//int main() {
//	int n = 0, x;
//	int arr[1000];
//	while(scanf("%d", &x)==1){
//		arr[n] = x;
//		n++;
//		}
//	change_max_min(n, arr);
     
 //   for(int i=0; i<n; ++i){
//		printf("%d ",arr[i]);
//		}

//return 0;
//}


