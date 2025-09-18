#include <stdio.h>
#include <stdlib.h>

int insertion();
int deletion();
void traversal();

int queue[5], choice, front = -1, rare = -1, item;

int main()
{
    do
    {
        printf("1 > push.\n2 > pop.\n3 > traversal.\n4 > ecit.\nEnter your choice > ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertion();
            break;

        case 2:
            deletion();
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

int insertion()
{
    if (rare == 4)
    {
        printf("Queue is overflow\n");
    }
    else
    {
        rare = rare + 1;
        front = 0;
        printf("->");
        scanf("%d", &queue[rare]);
    }

    for (int i = front; i <= rare; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int deletion()
{
    if (front == -1 || front > rare)
    {
        printf("underflow\n");
    }
    else
    {
        item = queue[front];
        for (int i = front + 1; i < 5; i++)
        {
            printf("%d\n", queue[i]);
        }
        printf("deleted item is > %d\n", item);

        front = front + 1;
    }
}

void traversal()
{
    for (int i = front; i <= rare; i++)
    {
        printf("%d\n", queue[i]);
    }
}