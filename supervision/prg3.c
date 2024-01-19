#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("test.txt", "a"); 
    if (file == NULL) {
        printf("Could not open file.txt.\n");
        return 1;
    }

    fprintf(file, "This is a new line appended to the file.\n");

    fclose(file);

    return 0;
}
