#include <stdio.h>

int nod(int a, int b)

{
   int ost, max_val, min_val, k;
   if(a>=b){
       max_val = a;
       min_val = b;

   }
   else {
       max_val = b;
       min_val = a;
   }


   while(min_val != 0){

       ost = max_val % min_val;
       if(ost != 0)
           k = ost;
       max_val = min_val;
       min_val = ost;

   }
   return k;

}


int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", nod(a, b));

    return 0;


}
