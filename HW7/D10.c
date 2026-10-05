
#include <stdio.h>
#include <string.h>

int is_prime(int n, int* delitel) {
	if(*delitel==n){
		return 1;
		}
	if(n%*delitel==0) {
		return 0;}
	else {
		*delitel = *delitel + 1;
		return is_prime(n, delitel);
		}
	
	}

int main(void)
{
	int n, delitel=2;
	scanf("%d", &n);
	int fl = 0;
	if((n==1) || (n==0)) printf("NO");
	else if(n==2) printf("YES");
	else {fl = is_prime(n, &delitel);
	if(fl==1) printf("YES");
	else printf("NO");}
    
	return 0;
}

