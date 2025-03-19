#include <stdio.h>
int removeDup(int array[], int size)
{
    if (size == 0)
    return 0;
    int unique = 0;
    for (int i =0; i < size; i++)
    {
        if(array[i] != array[unique])
        {
            unique++;
            array[unique] = array[i];
        }
    }
    return unique + 1;
}
int main()
{
    int array[] = { 2, 2, 3, 4, 4, 4, 7, 7};
    int size = sizeof(array)/sizeof(array[0]);
    size = removeDup(array, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}