#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("exemplo.txt", "w+");
    if (fp == NULL) {
        perror("Erro ao abrir o arquivo");
        return EXIT_FAILURE;
    }

    for (int count = 1; count < 5; count++) {
        fprintf(fp, "%d ", count);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}
