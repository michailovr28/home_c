
#include <stdio.h>

int is_simple(int a)

{
    if(a==2) return 1;

    if(a==1) return 0;

    for(int i=2; i<a; ++i)
        if(a%i==0) return 0;

    return 1;

}

void print_simple(int n)
{
        int l = n;
        for(int j = 2; j<=n; ++j){
             if((is_simple(j)==1) && (l%j==0)) {
                 while(l%j==0){
                     printf("%d ", j);
                     l = l / j;}
            }
        }

}


int main(void) {
    int b;
    scanf("%d", &b);
    print_simple(b);

    return 0;


}
