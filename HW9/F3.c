#include <stdio.h>
#include <string.h>

void func(int len, char arr[]){
	int mas[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for(int i=0; i<len-1; ++i){
		if(arr[i] == '0') mas[0] +=1;
		if(arr[i] == '1') mas[1] +=1;
		if(arr[i] == '2') mas[2] +=1;	
		if(arr[i] == '3') mas[3] +=1;
		if(arr[i] == '4') mas[4] +=1;
		if(arr[i] == '5') mas[5] +=1;
		if(arr[i] == '6') mas[6] +=1;
		if(arr[i] == '7') mas[7] +=1;
		if(arr[i] == '8') mas[8] +=1;	
		if(arr[i] == '9') mas[9] +=1;	
			}
		
	 for(int i = 0; i<=9; ++i){
		 if(mas[i]>0){
			 printf("%d %d\n", i, mas[i]);
			 }
		 
		 }}
	     

int main(void)
{
	
	char arr[1002];
	fgets(arr, sizeof(arr), stdin);
	int len = strlen(arr);
	arr[len-1] = '\0';
	func(len, arr);
		
	
	return 0;
}

