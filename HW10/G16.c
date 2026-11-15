
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   FILE *fp = fopen("input.txt", "r");
if (fp == NULL) return 1;

char buffer[1100];
if (fgets(buffer, sizeof(buffer), fp) == NULL) {
    buffer[0] = '\0';
}
fclose(fp);

int len = strlen(buffer);
while (len > 0 && (buffer[len-1] == '\n' || buffer[len-1] == '\r')) {
    buffer[--len] = '\0';
}

    char ling[5] = "Ling";
    char cao[4] = "Cao";
    char res[1100];
    int len1 = strlen(cao);
    int len2 = strlen(ling);
    char *p = buffer;
    char *f = buffer;
    int k = 0;

    while ((f = strstr(p, ling)) != NULL) {
        int ind = f - p;
        int ind2 = p - buffer;
        for (int i = ind2; i < (ind2 + ind); i++) {
            res[k] = buffer[i];
            k++;
        }
        for (int j = 0; j < len1; j++) {
            res[k] = cao[j];
            k++;
        }
        p = f + len2;
    }

    while (*p != '\0') {
        res[k] = *p;
        k++;
        p++;
    }
    res[k] = '\0';

    FILE *in = fopen("output.txt", "w");
    if (in == NULL) return 3;
    fputs(res, in);
    fclose(in);
    return 0;
}
