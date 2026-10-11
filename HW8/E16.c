#include"stdio.h"
int main()
{
    int n = 10;
    int max_num=0, c=1;
    int arr[10];

    for(int i = 0; i< n; ++i){
        scanf("%d", &arr[i]);}

    for(int i = 0; i< n-1; ++i){
        int k = 1, nm = 0;
    for(int j = i+1; j<n; ++j){
        if(arr[i] == arr[j]){
          k = k + 1;
          nm = arr[i];}}
    if(k > c) {
        c = k;
       max_num = nm;}
    }

    printf("%d", max_num);

}
