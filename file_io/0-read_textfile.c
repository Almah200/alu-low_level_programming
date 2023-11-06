#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Reads a text file and prints it's date to the POSIX standard output.
 *
 * @param filename: The name of the text file to be read.
 * @param letters: The number of letters to read and print.
 * @return: The actual number of letters read and printed.
 *          Returns 0 if the file cannot be opened or read, or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }
 
    FILE *file = fopen(filename, "r");
 
    if (file == NULL) {
        return 0;
    }
 
    char *buffer = (char *) malloc(letters + 1);

    if (buffer == NULL) {
        fclose(file);
        return 0;
    }
 
    ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
 
    if (bytesRead == 0) {
        fclose(file);
        free(buffer);
        return 0;
    }
 
    ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
 
    if (bytesWritten != bytesRead) {
        fclose(file);
        free(buffer);
        return 0;
    }
 
    fclose(file);
    free(buffer);
 
    return bytesRead;
}
