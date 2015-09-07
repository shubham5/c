/* strcpy_demo : copy t to s; array version */

void strcpy_demo(char *s, char *t){
    int i = 0;
    while((s[i] = t[i]) != '\0')
        i++;
}
