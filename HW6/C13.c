#include <stdio.h>
#include <math.h>

int fact(int a){
    int mult = 1;
    for(int i=2; i<=a; ++i)
        mult = mult * i;


    return mult;

}



float cosinus(float x)

{
    int i = 4;
    char flag = 1;
    float tol = 0.001, res= 1 - pow(x,2)/(fact(2));
    float dt = powf(x,2)/(fact(2));

    while(fabs(dt)>tol){
        dt = pow(x,i)/(fact(i));
        if(flag==1)
            res = res + dt;
        else res = res - dt;
        flag = 1-flag;
        i = i + 2;


    }

    return res;

}


int main(void) {
    float x;
    scanf("%f", &x);
    printf("%.3f", cosinus(3.14 / 180 * x));

    return 0;


}
