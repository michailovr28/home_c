
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

	char* p = strchr(buffer, ' ');
	char surname[1000];
	char name[1000];
	int inds = p - buffer;
	for(int i = 0; i< inds; i++){
		surname[i] = buffer[i];
		}
	surname[inds] = '\0';
	char* s = strchr(p+1, ' ');
	int indn = s - p;
	int ind = 0;
	for(int i = inds+1; i<(inds+indn+1); i++){
		name[ind] = buffer[i];
		ind++;
		}
	name[indn] = '\0';
     
	

    FILE* in = fopen("output.txt", "w");
	    fputs("Hello, ", in);
	    fputs(name, in);
	    fputs(surname, in);
	    fputs("!", in);
	
	
	return 0;
}

