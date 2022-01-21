#include <stdio.h>
#include <stdlib.h>
char * swap(char s[], int c1, int c2)
{
    int length;
    for(length = 0; s[length] != '\0'; length++);
    char *s_out;
    s_out = (char*)malloc((length+1)*sizeof(char));
    for(int i = 0; i<length; i++){
        s_out[i] = s[i];
    }
    s_out[length] = '\0';

    char t = s_out[c1];
    s_out[c1] = s_out[c2];
    s_out[c2] = t;
    return s_out;
}
