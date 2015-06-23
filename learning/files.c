//This demonstrates the usage of files.

// Declaring Files ->  FILE *<file-name>
//
// Opening Files   ->  FILE *fopen(const char * filename, const char * mode)
// r -> for reading
// w -> for writing. If file does not exists then new file is created.
//       Otherwise all the content is erased and then added.
// a -> for appending to the file.
//
// binary files -> adding 'b' to the modes. eg. "rb", "wb", "ab"
//
// Closing files ->    int fclose(FILE *fp)
//
// Writing to a file -> int fputc(int c, FILE *fp)
// the above function writes a character to the file.
//
// Writing to file -> int fputs(const char *s, FILE *fp)
// the above function writes a string to the file.
//
// Writing to file -> int fprintf(FILE *fp, const char *format, ...)
// the above function works as the printf().
//
// Reading from a file -> int fgetc(FILE *fp)
// the above function returns a charater from a file.
//
// Reading from a file -> char *fgets(char *buff, int n, FILE *fp)
// this function reads upto n-1 characters into the string buff.
//
// Reading from a file -> int fscanf(FILE *fp, const char *format,...)
// this function reads the file input as the scanf() function

#include<stdio.h>

int main(void){
    write();
    read();

    return 0;
}

int write(void){
    FILE *fp;

    fp = fopen("Test", "w");

    fprintf(fp, "This is a test for fprintf...\n");
    fputs("This is a test for fputs...\n", fp);

    return 0;
}

int read(void){
    char buff[100];
    FILE *fp;

    fp = fopen("Test", "rb");

    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff);

    fgets(buff, 101, (FILE*)fp);
    printf("2 : %s\n", buff);
    fclose(fp);
    
    return 0;
}
