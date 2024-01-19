#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    printf("Enter name of source file: ");
    scanf("%s", source);

    source = fopen(source, "r");
    if (source == NULL) {
        printf("Error in opening source file. Exiting...\n");
        exit(1);
    }

    printf("Enter name of destination file: ");
    scanf("%s", destination);

    destination = fopen(destination, "w");
    if (destination == NULL) {
        printf("Error in opening destination file. Exiting...\n");
        fclose(source);
        exit(1);
    }

    printf("Copying contents from source to destination file...\n");
    while ((ch = fgetc(source)) != EOF)//this condition will check whether the file is copied or read, completely till the END OF FILE.
        fputc(ch, destination);

    printf("File copy successful. Closing files...\n");

    fclose(source);
    fclose(destination);

    return 0;
}
