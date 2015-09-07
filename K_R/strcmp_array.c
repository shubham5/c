/* strcmp : return <0 if s<t, 0 is s=t, >0 if s>t */

int strcmp(char *s, char *t){
    int i = 0;
    while(s[i] != '\0' && t[i] != '\0' && s[i] == t[i])
        i++;
    return s[i] - t[i];
}
