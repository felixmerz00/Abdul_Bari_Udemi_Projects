#include <stdio.h>
#include <stdlib.h>

char * swap(char s[], int c1, int c2);

void string_perm(char s[], int l, int h)
{
    char *pS = s;
    if(l == h){
        char *pS_copy = pS;
        while(*pS_copy != '\0'){
            printf("%c", *pS_copy++);
        }
        printf("\n");
    }
    else{
        for(int i = l; i <= h; i++){
            pS = swap(pS, i, l);
            string_perm(pS, l+1, h);
            pS = swap(pS, i, l);
        }
    }
}
