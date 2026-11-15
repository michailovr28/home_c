
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{   
	FILE* fp = fopen("input.txt", "r");
	if (fp == NULL){
	    puts("NO FILE ERROR");
	    return 1;}
	char buffer[4];
	
	if(fgets(buffer,  sizeof(buffer), fp) == NULL){
		puts("Can't read symbol");
		fclose(fp);
		return 2;}
	else {fclose(fp);}
	int len = strlen(buffer);
	if(len > 0 && buffer[len-1] == '\n'){
		buffer[len-1] = '\0';
		}
		
	int N = atoi(buffer);
	char d = 2;
	char l = 'A';
	char arr[N];
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		if(i%2==0) {
			 arr[i] = l;
			 l++;
			}
		
		if(i%2==1) {
			if(d>8) {
				d=2;}
		    arr[i] = d;
		    d+=2;
		    }}
		
	//for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
	//	if(i%2==1) {
	//	    printf("%d", arr[i]);}
	//	else {
	//		printf("%c", arr[i]);
	//		}
	//	}
	
	FILE* in = fopen("output.txt", "w"); 	
		for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
			if(i%2==1) {
		    fprintf(in, "%d", arr[i]);}
		    else {
			fprintf(in, "%c", arr[i]);
			}}
			
	fclose(in);
	
	
	return 0;
}

