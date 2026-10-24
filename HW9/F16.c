#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char func(char a[])
{

    char let[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int cell_num;
    int num = atoi(&a[1]);
    for(int i = 0; i<8; ++i){
        if(a[0] == let[i]){
            cell_num = i * 8 + num - 1;
        }

    }



    char fl = 1; //black
    int cnt = 0;
    for(int i = 0; i< 8; ++i) //bukva
    {
         for(int j = 0; j< 8; ++j)   //cifra
         {
            if(cnt==cell_num) return fl;
            ++cnt;
            fl = !fl;
         }
    fl = !fl;

    }
return fl;

}



int main() {
	char arr[3];
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0';
	char res = func(arr);
	if(res==1) printf("BLACK");
	else printf("WHITE");
	return 0;

}

