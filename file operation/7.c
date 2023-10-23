#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    FILE *inputFile, *outputFile;
    int num, count = 0;
    int numbers[1000];
    inputFile = fopen("Data.txt", "r");
    if (inputFile == NULL)
    {
        printf("Unable to open the input file.\n");
        return 1;
    }
    while (fscanf(inputFile, "%d", &num) != EOF)
    {
        numbers[count++] = num;
    }
    fclose(inputFile);
    qsort(numbers, count, sizeof(int), compare);
    outputFile = fopen("Descending.txt", "w");
    if (outputFile == NULL)
    {
        printf("Unable to create the output file.\n");
        return 1;
    }
    for (int i = 0; i < count; i++)
    {
        fprintf(outputFile, "%d\n", numbers[i]);
    }
    fclose(outputFile);

    printf("Numbers written in descending order to Descending.txt.\n");

    return 0;
}
