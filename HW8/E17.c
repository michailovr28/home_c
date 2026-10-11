
#include <stdio.h>

int main(void)
{
	int n = 10, zero_count=0;
	int arr[n];
	int res[10] = {0};
	int *p = res;
	
	for(int i = 0; i<n; ++i){
		scanf("%d", &arr[i]);
		}
		
	for(int i = 0; i<n; ++i){
		for(int j = i+1; j<n; ++j){
			if(arr[i] == arr[j]){
				*p = arr[i];
				p++;
				break;
				}
			}
		if(arr[i]==0) {
			zero_count = zero_count + 1;
			}
	
			}

	if(zero_count >= 2){
       for(int i = 0; i<n; i++){
		  int fl = 1;
		  for(int l = 0; l<n; ++l){
			if(arr[i] == res[l]) {
			fl = 0;
		break;}}
		 if(fl==1)  {
			  printf("%d ", arr[i]);
			  }
		  else{
			  continue;
			  }

				}}
	if ((zero_count==0) || (zero_count==1)){
		  for(int i= 0; i<n; i++){
		  int fl = 1;
		  for(int l = 0; l<n; ++l){
			if(arr[i] == res[l]) {
			fl = 0;
		 break;}}
		 if((fl==1) || (zero_count==1))  {
			  printf("%d ", arr[i]);
			  }
		  else{
			  continue;
			  }
		 
		 
		 }
		 
		 
		 
		}
	
		
		 
	
	return 0;
}

