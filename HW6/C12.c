#include <stdio.h>
#include <math.h>

int fact(int a){
    int mult = 1;
    for(int i=2; i<=a; ++i)
        mult = mult * i;


    return mult;

}



float sinus(float x)

{
    int i = 5;
    char flag = 1;
    float tol = 0.001, res=x - pow(x,3)/(fact(3));
    float dt = pow(x,3)/(fact(3));

    while(fabs(dt)>tol){
        dt = pow(x,i)/(fact(i));
        if(flag==1)
            res = res + dt;
        else res = res - dt;
        flag = ~flag;
        i = i + 2;


    }

    return res;

}


int main(void) {
    float x;
    scanf("%f", &x);
    printf("%.3f", sinus(3.14 / 180 * x));

    return 0;


}
