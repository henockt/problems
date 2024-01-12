#include <ctype.h>

bool halvesAreAlike(char* s) {
    int len = strlen(s);
    int l = len / 2;
    int cl = 0, cr = 0;

    for (int i = 0, j = len - 1; i < l; i++, j--)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cl++;
        }

        char d = tolower(s[j]);
        if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u') {
            cr++;
        }
    }

    return (cl == cr);
}