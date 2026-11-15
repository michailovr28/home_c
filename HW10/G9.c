
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

char des[1000];
	int ind = 0;

	for(int i =0; i<len; i++){
	    if(buffer[i] != ' '){
	      int fl1=1;
	      for(int j = 0; j<len; j++){
	        if((j!=i) && (buffer[i] == buffer[j])){
	           fl1=0;
	           int fl2 = 1;
	            for(int k =0; k<ind; k++){
		           if(buffer[i]==des[k]){
	                   fl2 = 0;}}

	           if (fl2==1){
	           des[ind] = buffer[i];
	           ind++;}

	            }
	        }
	    if (fl1==1){
	   des[ind] = buffer[i];
	   ind++;}

	    }


	}
     
	

    FILE* in = fopen("output.txt", "w");
        for(int i=0; i<ind; i++){
	    fprintf(in, "%c", des[i]);
	}
	
	
	return 0;
}

