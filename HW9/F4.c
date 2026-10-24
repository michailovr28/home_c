//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>

void print_digit(char s[]){
	int mas[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int len = strlen(s);
	s[len-1] = '\0';
	for(int i=0; i<len-1; ++i){
	  if(isdigit((unsigned char)s[i])){
		  mas[s[i]-'0']++;
		  
		  }}
	  
	  
	 for(int i = 0; i<=9; ++i){
		 if(mas[i]>0){
			 printf("%d %d\n", i, mas[i]);
			 }
		 
		 }}
	     

//int main(void)
//{
	
//	char arr[1002];
//	fgets(arr, sizeof(arr), stdin);
	
//	print_digit(arr);
		
	
//	return 0;
//}

