
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

    char fl=0;
	FILE* in = fopen("output.txt", "w"); 	
		for(int i = 0; i<len-1; i++){
			if(buffer[i] == buffer[len-1]){
				if(fl==0) {fprintf(in, "%d", i);}
				else {fprintf(in, " %d", i);}
				fl=1;
			 }}
			
	fclose(in);
	
	
	return 0;
}

