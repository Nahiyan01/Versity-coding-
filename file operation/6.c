#include <stdio.h>

int main()
{
    FILE *inputFile, *evenFile, *oddFile;
    int num;
    inputFile = fopen("Data.txt", "r");
    if (inputFile == NULL)
    {
        printf("Unable to open the input file.\n");
        return 1;
    }
    evenFile = fopen("Even.txt", "w");
    if (evenFile == NULL)
    {
        fclose(inputFile);
        printf("Unable to create the even output file.\n");
        return 1;
    }

    oddFile = fopen("Odd.txt", "w");
    if (oddFile == NULL)
    {
        fclose(inputFile);
        fclose(evenFile);
        printf("Unable to create the odd output file.\n");
        return 1;
    }

    while (fscanf(inputFile, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(evenFile, "%d\n", num);
        }
        else
        {
            fprintf(oddFile, "%d\n", num);
        }
    }
    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers written to Even.txt and Odd.txt.\n");

    return 0;
}
