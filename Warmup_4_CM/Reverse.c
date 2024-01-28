#include <stdio.h> 
#include <string.h> 
int main() {
    char str[10] = "hello"; 
    printf("Original String: %s\n", str); 
    for (int i = 0, j = strlen(str) - 1; i <= j; i++, j--) { 
        char c = str[i]; 
        str[i] = str[j]; 
        str[j] = c; 
    } 
    printf("Reversed String: %s", str);
}