#include <stdio.h>
#include <math.h>

void grow_up(int a){
	int flag=1;
    while(a>0){
	    int c = a%10;
	    int b = a/10 %10;
	    if(c<=b) flag=0;
	    a = a / 10;
    }
    
    if(flag==1) printf("YES");
    else printf("NO");

}


int main(void) {
    int x;
    scanf("%d", &x);
    grow_up(x);

    return 0;


}
