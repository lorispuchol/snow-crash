#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r+");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int i = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        ch -= i;
        write (1, &ch, 1);
        i++;
    }

    fclose(file);
    return 0;
}

