#include <stdio.h>
int containDup(int array[], int size)
{
    for (int i = 0; i <size-1; i++)
    {
        for (int j = i + 1; j <size; j++)
        {
            if (array[i] == array [j])
            {
                return 1;
            }
        }
       
    }
    return 0;
}
int main()
{
    int array[] ={2, 3, 4, 4, 4, 7, 7};
    int size = sizeof(array)/sizeof(array)[0];
    if (containsDup(array, size)
{
    printf("TRUE\n");
}
else{
    printf("FALSE\n");
}
return 0;
}