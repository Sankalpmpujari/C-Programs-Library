#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[] = "sample_output.txt";
    char writeText[] = "Hello from C File I/O Demonstration!\nThis file was created and written using C standard I/O functions.\n";
    char buffer[256];

    printf("--- File I/O Operations in C ---\n");

    // 1. Writing to a file
    printf("[1] Writing data to file: %s ...\n", filename);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }
    fputs(writeText, fp);
    fclose(fp);
    printf("Write completed successfully.\n\n");

    // 2. Reading from the file
    printf("[2] Reading data back from file: %s ...\n", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
    printf("--- File Content Start ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    printf("--- File Content End ---\n");
    fclose(fp);

    printf("\nFile I/O demonstration finished successfully.\n");
    return 0;
}
