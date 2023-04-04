#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char c;
    
    // Check if file argument is provided
    if(argc < 2) {
        printf("Usage: %s [filename]\n", argv[0]);
        return 1;
    }
    
    // Open the file in read mode
    fp = fopen(argv[1], "r");
    if(fp == NULL) {
        printf("Error: Failed to open file %s\n", argv[1]);
        return 1;
    }
    
    // Read and print the contents of the file
    while((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    
    // Close the file
    fclose(fp);
    
    return 0;
}

