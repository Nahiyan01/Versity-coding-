#include <stdio.h>

int main()
{
    FILE *inputFile, *outputFile;
    int n, num;
    inputFile = fopen("Data.txt", "r");
    if (inputFile == NULL)
    {
        printf("Unable to open the input file.\n");
        return 1;
    }
    outputFile = fopen("Output.txt", "w");
    if (outputFile == NULL)
    {
        fclose(inputFile);
        printf("Unable to create the output file.\n");
        return 1;
    }

    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &num);
        fprintf(outputFile, "%d\n", num);
    }
    fclose(inputFile);
    fclose(outputFile);

    printf("First %d numbers written to Output.txt.\n", n);

    return 0;
}
