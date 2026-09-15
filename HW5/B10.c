#include <stdio.h>

int main(void)
{
	int a;
	char flag = 1;
	scanf("%d", &a);
	
	while(a>0) {
	    int b = a % 10;
	    int c = a / 10 % 10;
	    if(b <= c) {flag = 0; break;}
	    a = a / 10;
    }
    
    
    if(flag==1) 
	    printf("YES");
	else printf("NO");	
		
	    
	
	return 0;
}
