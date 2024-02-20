#include <stdlib.h>
#include <stdio.h>
#include "token.h"
#include <string.h>

token_t* create_new_token(token_type_t type, const char *text) {
    token_t *token = (token_t*)malloc(sizeof(token_t));
    if (token == NULL) {
        exit(EXIT_FAILURE);
    }
    token->type = type;
    token->text = strdup(text);
    return token;
}
void free_token_memory(token_t* token) {
    if (token != NULL) {
        free(token->text);
        free(token);
    }
}