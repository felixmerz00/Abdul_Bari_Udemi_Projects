char* reverse_string(char str[])
{
    int length;
    for(length = 0; str[length] != '\0'; length++);
    /*create new string*/
    char *pS;
    pS = (char*)malloc((length+1)*sizeof(char));
    /*fill new string*/
    int j = 0;
    for(int i = length-1; i >= 0; i--){
        pS[j] = str[i];
        j++;
    }
    pS[j] = '\0';
    /*return new string*/
    return pS;
}

char* reverse_string2(char str[])
{
    int length;
    for(length = 0; str[length] != '\0'; length++);
    /*create a string in heap to return*/
    char *s_out;
    s_out = (char *)malloc(length * sizeof(char));
    /*copy input string into heap string*/
    for(int i = 0; i < length; i++){
        s_out[i] = str[i];
    }
    s_out[length] = '\0';
    /*reverse the string in heap*/
    char t;
    for(int i = 0; i < length - i - 1; i++){
        t = s_out[length-i-1];
        s_out[length-i-1] = s_out[i];
        s_out[i] = t;
    }
    return s_out;
}
