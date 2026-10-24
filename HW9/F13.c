
#include <stdio.h>

int count_between(int from, int to, int size, int a[])
{
       int cnt = 0, fl=0;
       int d = to - from;
       int k = from;
       int b[d+1];
       for(int i = 0; i<=d; ++i){
		   b[i] = k;
		   k += 1; 
		   }
	   
	   
	   for(int i = 2; i<size; ++i){
		   for(int j = 0; j<=d; ++j){
			   if(a[i] == b[j]){
				   cnt += 1;
				   fl=1;
				   }
			   }
		   
		   }
       if(fl==0) return 0;
       return cnt;
}

int main() {
	int n=0, x;
	int arr[1000];
	while(scanf("%d", &x)==1){
	    arr[n] = x;
	    n++;
	}

   int res = count_between(arr[0], arr[1], n, arr);
   printf("%d", res);
  return 0;
}
