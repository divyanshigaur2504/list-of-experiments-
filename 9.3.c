#include <stdio.h>
int main() {
    FILE *fp;
    char line[100];
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File content line by line:\n");
    while(fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
