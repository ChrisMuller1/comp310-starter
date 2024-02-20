#ifndef TOKEN_H
#define TOKEN_H
// different token types listed in the assignment 
typedef enum {
    NUMBER,
    OPERATOR,
    SYMBOL,
    WORD
} token_type_t;

typedef struct {
    token_type_t type;
    char *text;
} token_t;

token_t* create_new_token(token_type_t type, const char *text);

void free_token_memory(token_t *token);

#endif