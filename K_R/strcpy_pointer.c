/* strcpy_demo : copy t to s; pointer version */

void strcpy_demo(char *s, char *t){
    while((*s++ = *t++) != '\0');
}
