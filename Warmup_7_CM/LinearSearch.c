#include <stdio.h>
int main() {
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    int size = sizeof(array);
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            index = i;
            printf("%d", i);
            break;
        }
    }
}