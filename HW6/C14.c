#include <stdio.h>
#include <math.h>

void is_even(int a){
    int sum = 0;
    while(a>0){
		sum = sum +  a%10;
	    a = a/10;
		}
	if(sum%2==0) printf("YES");
	else printf("NO");

}


int main(void) {
    int x;
    scanf("%d", &x);
    is_even(x);

    return 0;


}
