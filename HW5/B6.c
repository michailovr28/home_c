#include <stdio.h>

int main(void)
{
	int a;
	char flag = 0;
	scanf("%d", &a);
	int b = a % 10;
	a = a / 10;
	
	while(a>0) {
	    int c = a % 10;
	    if(b==c) flag = 1;
	    b = c;
	    a = a / 10;
    }
    if(flag==1) 
	    printf("YES");
	else printf("NO");	
		
	    
	
	return 0;
}

