#include <stdio.h>
#include <string.h>


int func(int size, char str[], char b[], int size_b)
{
    int cnt=1, n = 0;
    for(int i = 0; i< size; i+=cnt){
        cnt = 1;
       for(int j = i+1; j< size; ++j) {
           if(str[i] == str[j]){
               cnt += 1;
           }
           else break;
       }

    b[n++] = str[i];
    n += snprintf(b + n,size_b-n, "%d", cnt);
    }
return n;
}




int main() {
	char arr[1000];
	char b[1000];
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, ".\n")] = '\0';
	int len = strlen(arr);
    int n = func(len, arr, b, sizeof(b));
    b[n] = '\0';

    printf("%s", b);


return 0;
}
