#include <stdio.h>

int main() {
   FILE *file;
   char filename[] = "test.txt";
   char ch;

   // Open file
   file = fopen(filename, "r");
   if (file == NULL) {
       printf("Error: Could not open file %s.\n", filename);
       return 1;
   }

   // Read file and display contents
   printf("Contents of file %s:\n\n", filename);
   while ((ch = fgetc(file)) != EOF) {
       printf("%c", ch);
   }

   // Close file
   fclose(file);

   return 0;
}
