#include <stdio.h>

int singleNum(int array[], int size)
{
    int outcome = 0;
    for (int i = 0; i < size; i++){
        outcome ^= array[i];
    }
    return outcome;
}
int main(){
    int array[] = {5, 6, 6, 7, 7, 9, 9};
    int size = sizeof(array) / sizeof(array[0]);
    printf("single Number : %d\n", singleNum (array, size));
    return 0;
}