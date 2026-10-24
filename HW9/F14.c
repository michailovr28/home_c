#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[])
{  
	
		
    int indf=2, indt=2;
    for(int i=2; i<size; ++i){
        if(a[i]==from) {
            indf = i;}
        if(a[i]==to){
			indt = i;
			}}
   
   int temp;
   if(indf > indt){
		temp = indf;
		indf = indt;
		indt = temp;
		}
    
    int end = a[indt];
    int sum = a[indf];
    while(a[indf] != end){
        sum += a[indf+1];
        indf++;
    }

 return sum;
}


//int main() {
//	int n=0, x;
//	int arr[1000];
//	while(scanf("%d", &x)==1){
//	    arr[n] = x;
//	    n++;
//	}

//    int res = sum_between_ab(arr[0], arr[1], n, arr);
//   printf("%d", res);
//   return 0;
//}

