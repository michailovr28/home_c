#include <stdio.h>
#include <math.h>


int count_bigger_abs(int n, int a[])
{
    int mx=a[0];
    for(int i=0; i<n; ++i){
        if(a[i]>mx) {
            mx = a[i];
            }
    }
    int cnt = 0;
    for(int i=0; i<n; ++i){
        if(abs(a[i])  > mx){
            cnt += 1;
        }

    }


 return cnt;
}


//int main() {
//	int n=0, x;
//	int arr[1000];
//	while(scanf("%d", &x)==1){
//	    arr[n] = x;
//	    n++;
//	}

//    int res = count_bigger_abs(n, arr);
 //   printf("%d", res);
// return 0;
//}



