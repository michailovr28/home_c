#include <stdio.h>

int main() {
	int n = 10;
	int arr[10];
	int pos[10] = {0};
	int neg[10] = {0};
	int *pp = pos;
	int *pn = neg;
	  
	  
	for(int i=0; i<n; ++i){
	    scanf("%d", &arr[i]);}
	
	
	
    for(int i=0; i<n; ++i){
        if(arr[i]>0){
			*pp = arr[i];
			 pp++;}
		if(arr[i]<0){
			*pn = arr[i];
			 pn++;
			}}
	for(int k=0; k<n; k++){
		if(pos[k]!=0) {
			printf("%d ", pos[k]);
			}
		}
	for(int k=0; k<n; k++){
		if(neg[k]!=0) {
			printf("%d ", neg[k]);
		}
	}
    return 0;
}
