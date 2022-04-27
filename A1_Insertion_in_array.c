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

    int position, value, index;
    printf("Enter the position for new value : ");
    scanf("%d", &position);
    index = position - 1;

    printf("Enter the new value : ");
    scanf("%d", &value);

    // shifting elements to one step right side.
    for (int i = size; i > index; i--)
    {
        Arr[i] = Arr[i - 1];
    }

    // insert new value
    Arr[index] = value;

    // print new array
    printf("New array after insertion of new elemnet : ");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
    return 0;
}
