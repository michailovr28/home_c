#include <stdio.h>

int main(void)
{
	int a, i = 0;
	scanf("%d", &a);
	
	
	while(a>0) {
	    int b = a % 10;
	    if(b==9) i++;
	    a = a / 10;
    }
    
    
    if(i==1) 
	    printf("YES");
	else printf("NO");	
		
	    
	
	return 0;
}
