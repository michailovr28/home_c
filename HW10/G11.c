
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
    
    int cnt = 0;
    for(int i = 0; i<len; i++){
		if((buffer[i]=='a') && ((buffer[i+1]==' ') || (buffer[i+1]=='\0'))){
			cnt++;
			}
		}
	

    FILE* in = fopen("output.txt", "w");
    fprintf(in, "%d", cnt);

	
	
	return 0;
}

