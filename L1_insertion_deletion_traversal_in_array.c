#include <stdio.h>
#include <stdlib.h>

int insert();
int delete();
int traversal();

int array[10], n, choice, index1, element, temp;

int main()
{
    printf("How many element you want to enter > ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("->");
        scanf("%d", &array[i]);
    }

    do
    {
        printf("1 > insertion.\n2 > deletion.\n3 > traversal.\n4 > exit.Enter your choice > ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            traversal();
            break;

        case 4:
            exit(0);
            break;

        default:
            break;
        }

    } while (choice != 4);
}

int insert()
{
    n = n + 1;

    printf("enter the elements > ");
    scanf("%d", &element);

    printf("Enter the index1 > ");
    scanf("%d", &index1);

    for (int i = n; i >= index1; i--)
    {
        array[i]=array[i-1];
    }

    array[index1-1]=element;
}

int delete()
{
    printf("Enter the index1 > ");
    scanf("%d", &index1);

    for (int i = index1; i < n; i++)
    {
        array[i - 1] = array[i];
    }

    n = n - 1;
}

int traversal()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d -> %d\n", i + 1, array[i]);
    }
}
