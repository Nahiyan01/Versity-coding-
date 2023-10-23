#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("example.txt", "w");

    if (file == NULL)
    {
        printf("File creation failed.\n");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file);
    printf("File created and closed successfully.\n");
    return 0;
}
