
//#include <stdio.h>

int is_two_same(int size, int a[]){
	
	for(int i = 0; i<size-1; ++i){
	    for(int j=i+1; j<size; ++j){
			if(a[i] == a[j]) return 1;
			}
			}
	return 0;
	}



//int main(void)
//{

//	int arr[1000];
//	int n = 0, x;
//   while(scanf("%d",  &x) == 1){
//		arr[n] = x;
//		n++;
//		}
//    int answ = is_two_same(n, arr); 
    
//    if(answ==1) printf("YES");
 //   else printf("NO");
//	return 0;
//}

