#include <stdio.h>

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;
    double average = 0;
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        sum += numbers[i];
    }   
    average = (double) sum / (sizeof(numbers));

    printf("Sum: %d", sum);
    printf("Average: %lf", average);


}