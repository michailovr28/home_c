#include <stdio.h>

int main(void)
{
	int a;
	char flag = 1;
	scanf("%d", &a);
	if(a==1) flag=0;
	else{
	    for(int i = 2; i < a; ++i) {
	        if(a % i == 0) flag=0;			
	}
		
	}
	if(flag==1) printf("YES");
	else printf("NO");
	
	return 0;
}

