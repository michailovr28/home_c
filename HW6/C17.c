#include <stdio.h>

void  is_happy_number(int n)

{
    int sum=0, mult=1;
    while(n>0){
	    sum = sum + (n%10);
	    mult = mult * (n%10);	
		n = n / 10;
	}
    if(sum==mult) printf("YES");
    else printf("NO");

}




int main(void) {
    int b;
    scanf("%d", &b);
    is_happy_number(b);

    return 0;


}
