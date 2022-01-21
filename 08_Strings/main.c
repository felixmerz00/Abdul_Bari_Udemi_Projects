#include <stdio.h>
#include <stdlib.h>

char* reverse_string(char str[]);
char* reverse_string2(char str[]);
char * swap(char s[], int c1, int c2);

int main()
{
    /*reverse_string() testen*/
    /*char s[] = "Hello World";
    printf("%s\n", reverse_string(s));
    char s2[] = "Bye World";
    printf("%s\n", reverse_string2(s2));*/

    /*swap() testen*/
    /*char *p;
    p = swap("Hallo Welt!", 4, 10);
    printf("%s\n", p);*/

    string_perm("ABC", 0, 2);

    return 0;
}
