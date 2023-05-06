#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, inp_array[SIZE],i;
void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Seek\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for ( i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}
/*Output:
	
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 1
Enter the element to be added onto the stack: 1
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 1
Enter the element to be added onto the stack: 2
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 3
Elements present in the stack:
2
1
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 1
Enter the element to be added onto the stack: 4
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 1
Enter the element to be added onto the stack: 6
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 3
Elements present in the stack:
6
4
2
1
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 2
Popped element: 6
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Seek
4.End
Enter the choice: 4
--------------------------------/*
