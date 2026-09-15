#include <stdio.h>

int main(void)
{
	int abc;
	scanf("%d", &abc);
	
	if((abc > 99) && (abc < 1000))
	    printf("YES");
	else printf("NO");
	
	
	return 0;
}

