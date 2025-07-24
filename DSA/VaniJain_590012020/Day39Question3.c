#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX];
int top1 = -1;
int top2 = MAX;
void push1(int x) 
{
    if (top1 + 1 == top2) 
    {
        printf("Stack Overflow: No space in array\n");
        return;
    }
    arr[++top1] = x;
}
void push2(int x) 
{
    if (top1 + 1 == top2) 
    {
        printf("Stack Overflow: No space in array\n");
        return;
    }
    arr[--top2] = x;
}
int pop1() 
{
    if (top1 == -1) 
    {
        printf("Stack Underflow in Stack 1\n");
        return -1;
    }
    return arr[top1--];
}
int pop2() 
{
    if (top2 == MAX) 
    {
        printf("Stack Underflow in Stack 2\n");
        return -1;
    }
    return arr[top2++];
}
void display1() 
{
    if (top1 == -1) 
    {
        printf("Stack 1 is empty\n");
        return;
    }
    printf("Stack 1: ");
    for (int i = 0; i <= top1; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void display2() 
{
    if (top2 == MAX) 
    {
        printf("Stack 2 is empty\n");
        return;
    }
    printf("Stack 2: ");
    for (int i = MAX - 1; i >= top2; i--) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int choice, stackNum, value;
    printf("Two Stacks in One Array\n");
    while (1) 
    {
        printf("\nMenu:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter stack number (1 or 2): ");
                scanf("%d", &stackNum);
                printf("Enter value to push: ");
                scanf("%d", &value);
                if (stackNum == 1)
                    push1(value);
                else if (stackNum == 2)
                    push2(value);
                else
                    printf("Invalid stack number\n");
                break;
            case 2:
                printf("Enter stack number (1 or 2): ");
                scanf("%d", &stackNum);
                if (stackNum == 1)
                    printf("Popped from Stack 1: %d\n", pop1());
                else if (stackNum == 2)
                    printf("Popped from Stack 2: %d\n", pop2());
                else
                    printf("Invalid stack number\n");
                break;
            case 3:
                display1();
                display2();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
