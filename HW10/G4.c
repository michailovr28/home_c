#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) return 1;

    char arr[256];
    if (fgets(arr, sizeof(arr), fp) == NULL) {
        fclose(fp);
        return 2;
    }
    fclose(fp);

    int cnt1[26] = {0}, cnt2[26] = {0};
    int second = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        char c = arr[i];
        if (c == ' ') {
            second = 1;
        } else if (c >= 'a' && c <= 'z') {
            if (second) cnt2[c - 'a']++;
            else cnt1[c - 'a']++;
        }
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) return 3;

    int first = 1;
    for (int k = 0; k < 26; k++) {
        if (cnt1[k] == 1 && cnt2[k] == 1) {
            if (!first) fprintf(out, " ");
            fprintf(out, "%c", 'a' + k);
            first = 0;
        }
    }
    fclose(out);
    return 0;
}
