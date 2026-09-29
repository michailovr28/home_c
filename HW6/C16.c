#include <stdio.h>

void is_prime(int a)

{
    int flag = 1;
    if(a==2) flag=1;
    if(a==1) flag=0;
    if(a==0) flag=0;
    for(int i=2; i<a; ++i)
        if(a%i==0) flag=0;
    if(flag==1) printf("YES");
    else printf("NO");
}


int main(void) {
    int b;
    scanf("%d", &b);
    is_prime(b);

    return 0;


}
