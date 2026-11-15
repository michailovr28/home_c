
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{   
	setlocale(LC_ALL, "Russian_Russia.1251");
	FILE* fp = fopen("input.txt", "r");
	if (fp == NULL){
	    puts("NO FILE ERROR");
	    return 1;}
	char buffer[102];
	
	if(fgets(buffer,  sizeof(buffer), fp) == NULL){
		puts("Can't read symbol");
		fclose(fp);
		return 2;}
	else {fclose(fp);}
	int len = strlen(buffer);
	if(len > 0 && buffer[len-1] == '\n'){
		buffer[len-1] = '\0';
		len--;
		}
	
	FILE* in = fopen("output.txt", "w"); 	
	for(int i=0; i<3; i++){
		fputs(buffer, in);
		if(i<2)	fputs(", ", in);
			}
	fprintf(in, " %d", len);
	    
	fclose(in);
	
	
	return 0;
}

