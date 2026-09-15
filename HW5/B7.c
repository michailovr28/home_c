#include <stdio.h>

int main(void)
{
	int a;
	char flag = 0;
	scanf("%d", &a);
	
	
	while(a>0) {
	    int b = a % 10;
	    int ost = a / 10;
	    while(ost > 0) {
	        int c = ost % 10;
	        if(b == c) flag = 1;
	        ost = ost / 10;
	    }
	    a = a / 10;
    }
    
    
    
    
    if(flag==1) 
	    printf("YES");
	else printf("NO");	
		
	    
	
	return 0;
}

