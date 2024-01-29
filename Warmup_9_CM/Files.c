#include <stdio.h>
int main() {
    const char* filename = "x.txt";
    FILE* fileWrite = fopen(filename, "w");
    fprintf(fileWrite, "Hello, World!");
    fclose(fileWrite);
    FILE* fileRead = fopen(filename, "r");
}