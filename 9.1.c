#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("test.txt", "w");  
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a file write example.\n");
    fclose(fp);
    printf("File created and text written successfully.\n");
    return 0;
}
