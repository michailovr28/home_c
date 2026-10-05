
#include <stdio.h>
#include <string.h>

void reverse_string(char *fst){
	if((*fst=='.') || (*fst=='\0')){
		return;
		}
	
	reverse_string(fst+1);
	printf("%c", *fst);
	
	
	
	}



int main(void)
{
	char str[256];
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
    reverse_string(str);
    
	return 0;
}

