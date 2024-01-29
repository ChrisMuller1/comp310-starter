#include <stdio.h>

int main(){
    int Number;
    int FinalAnswer = 1;
    printf("Enter a number: ");
    scanf("%d", &Number);
    for (int i = 1; i <= Number; i++) {
        FinalAnswer *= i;
    }
    printf("Factorial of %d is: %d\n", Number, FinalAnswer);
}
