#include <stdio.h>
#include <stdlib.h>

void insertion();
void deletion();
void traversal();

int stake[5], choice, top=0, maxstk=5, item;

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

void insertion()
{
    if (top == maxstk)
    {
        printf("overflow\n");
    }
    else
    {
        printf("enter the element > ");
        scanf("%d",&stake[top]);
        top = top + 1;
    }

    for (int i = 0; i < top; i++)
    {
        printf("%d\n",stake[i]);
    }
    
}

void deletion()
{
    if (top == 0)
    {
        printf("\nunderflow");
    }
    else
    {
        item = stake[top-1];
        top = top - 1;
    }

    for (int i = 0; i < top; i++)
    {
        printf("\n%d",stake[i]);
    }

    printf("\nthe deleted item is %d\n",item);
}

void traversal()
{
    for (int i = 0; i < top; i++)
    {
        printf("%d\n",stake[i]);
    }
    
}