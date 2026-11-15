
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{   
	FILE* fp = fopen("input.txt", "r");
	if (fp == NULL){
	    puts("NO FILE ERROR");
	    return 1;}
	char buffer[10000];
	
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
    
    int cnt_big = 0;
    int cnt_sm = 0;

    for(int i=0; i<len; i++){
    if(((int)buffer[i]>=97) && ((int)buffer[i]<=122)){
        cnt_sm++;}
    if(((int)buffer[i]>=65) && ((int)buffer[i]<=90)){
        cnt_big++;
    }}

	

    FILE* in = fopen("output.txt", "w");
    fprintf(in, "%d ", cnt_sm);
    fprintf(in, "%d", cnt_big);

	
	
	return 0;
}

