//#include <stdio.h>


void swap_negmax_last(int size, int a[]){
    int maxneg=0, ind=0;
    for(int i = 0; i<size; i++)
    {
        if(a[i] < 0)
        {
            maxneg = a[i];
            ind = i;
        }
    }

    if(maxneg < 0)
    {
        int temp; 
        for(int i = 0; i<size; i++)
        {
            if(a[i] < 0)
            {
                if(a[i] > maxneg)
                {
                    maxneg = a[i];
                    ind = i;
                }
            }

        }
    temp = a[ind];
    a[ind] = a[size-1];
    a[size-1] = temp;

    }
    }



//int main() {
//	int n=0, x;
//	int arr[1000];
//	while(scanf("%d", &x)==1){
//	    arr[n] = x;
//	    n++;
//	}

 //   swap_negmax_last(n, arr);
 //   for(int k; k<n; ++k){
 //       printf("%d ", arr[k]);

 //   }


//return 0;
//}

