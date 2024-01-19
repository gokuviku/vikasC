
#include <stdio.h>

int main() {
    FILE *file;
    const char *filename = "test.txt";
    const char *data = "This is a test file.";

    // Create file
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not create file %s.\n", filename);
        return 1;
    }

    // Write data into file
    fwrite(data, sizeof(char), strlen(data), file);

    // Close file
    fclose(file);

    printf("File %s created successfully.\n", filename);
    return 0;
}