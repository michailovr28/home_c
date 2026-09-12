
#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	double k, B;
	
	k = (double)(y2 - y1) / (double)(x2 - x1);
	B = y1 - k * x1;
    
    printf("%.2f %.2f", k, B);
    
	return 0;
}

