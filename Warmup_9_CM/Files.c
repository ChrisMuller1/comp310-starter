#include <stdio.h>
int main() {
    const char* filename = "x.txt";
    FILE* fileWrite = fopen(filename, "w");
    fprintf(fileWrite, "This is my file");
    fclose(fileWrite);
    FILE* fileRead = fopen(filename, "r");
    fclose(fileRead);
}