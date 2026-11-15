#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

	FILE* in = fopen("output.txt", "w"); 	
		for(int i = 0; i<=len-1; i++){
		   if (buffer[i] == 'a') {
			   buffer[i] = 'b'; 
			   continue;}
		   if (buffer[i] == 'A') {
			   buffer[i] = 'B'; 
			   continue;}
			   
		   if (buffer[i] == 'b') {
			   buffer[i] = 'a'; 
			   continue;}
		
		    if (buffer[i] == 'B') {
			   buffer[i] = 'A'; 
			   continue;}}
         for(int i = 0; i<=len-1; i++){
		   fprintf(in, "%c", buffer[i]);}
	fclose(in);
	
	
	return 0;
}
