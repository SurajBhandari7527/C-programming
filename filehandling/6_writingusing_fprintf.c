#include <stdio.h>

int main() {
    // Open a file for writing
    FILE *file = fopen("suraj.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Use fprintf to write formatted data to the file
    int age = 30;
    float height = 5.9;
    const char *name = "Alice";

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Height: %.1f\n", height);

    // Close the file
    fclose(file);

    return 0;
}
