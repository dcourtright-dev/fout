#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE* fptr;
    char data[4096];
    
    if (argc == 1) {
        printf("No file selected.");
    } else {
        fptr = fopen(argv[1], "r");
    }
    
    if (fptr == NULL) {
        printf("File Not Found.\n");
        return 1;
    }
    
    while(fgets(data, 4096, fptr) != NULL) {
        printf("%s", data);
    }
    
    fclose(fptr);
    return 0;
}
