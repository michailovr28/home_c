
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_palindrom(int size, char arr[]){
	int fl=1;
	for(int i=0; i<size/2; i++){
		if (arr[i] != arr[size - 1- i]) fl=0;
		}
	
	return fl;
	
	}



int main(void)
{   
	FILE* fp = fopen("input.txt", "r");
	if (fp == NULL){
	    puts("NO FILE ERROR");
	    return 1;}
	char buffer[1000];
	
	if(fgets(buffer,  sizeof(buffer), fp) == NULL){
		puts("Can't read symbol");
		fclose(fp);
		return 2;}
	fclose(fp);
	int len = strlen(buffer);
	if(len > 0 && buffer[len-1] == '\n'){
		buffer[len-1] = '\0';
		len--;
		}

int n = is_palindrom(len, buffer);
	
	 FILE* in = fopen("output.txt", "w"); 
         if(n==1) fputs("YES\0", in);
         else fputs("NO\0", in);
	fclose(in);
	
	
	return 0;
}

