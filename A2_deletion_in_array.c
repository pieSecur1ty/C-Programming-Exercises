#include <stdio.h>

int main(void)
{
    // user input
    int size;
    printf("Enter the array size : ");
    scanf("%d", &size);

    int Arr[size];
    printf("Enter the array elements :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Value %d : ", i + 1);
        scanf("%d", &Arr[i]);
    }

    int position, index;
    printf("Enter the position for new value : ");
    scanf("%d", &position);
    index = position - 1;

    // shift elements one step left side
    for (int i = index; i < size - 1; i++)
    {
        Arr[i] = Arr[i + 1];
    }

    // print new array
    printf("New array after deletion of an element from input position : ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    return 0;
}
