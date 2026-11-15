
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) return 1;

    char buffer[1100];
    if (fgets(buffer, sizeof(buffer), fp) == NULL) {
        fclose(fp);
        return 2;
    }
    fclose(fp);

    int len = strlen(buffer);
    while (len > 0 && (buffer[len-1] == '\n' || buffer[len-1] == '\r')) {
        buffer[--len] = '\0';
    }

    char *slash = strrchr(buffer, '/');
    char *dot = strrchr(buffer, '.');

    if (dot != NULL && (slash == NULL || dot > slash)) {
        *dot = '\0';
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) return 3;
    fprintf(out, "%s.html", buffer);
    fclose(out);
    return 0;
}
