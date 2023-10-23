#include <stdio.h>
int main()
{
    FILE *source, *destination;
    int offset, numBytes;
    char buffer[1000];
    source = fopen("source.txt", "rb");
    if (source == NULL)
    {
        printf("Unable to open source file.\n");
        return 1;
    }
    destination = fopen("destination.txt", "wb");
    if (destination == NULL)
    {
        fclose(source);
        printf("Unable to open destination file.\n");
        return 1;
    }
    offset = 100;
    numBytes = 500;
    fseek(source, offset, SEEK_SET);
    while (numBytes > 0)
    {
        int bytesRead = fread(buffer, 1, sizeof(buffer), source);
        if (bytesRead == 0)
        {
            break;
        }
        fwrite(buffer, 1, bytesRead, destination);
        numBytes -= bytesRead;
    }
    fclose(source);
    fclose(destination);

    printf("Bytes copied successfully.\n");
    return 0;
}
