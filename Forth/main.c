#include "token.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    printf("Enter FORTH code:\n");
    while ((read = getline(&line, &len, stdin)) != -1) {
        token_t *token;
        char *ptr = line;
        while ((token = token_next(&ptr))) {
            printf("Token: %s (%d)\n", token->text, token->type);
            token_free(token);
        }
        free(line);
        line = NULL;
        len = 0;
    }
    free(line);
    return 0;
}