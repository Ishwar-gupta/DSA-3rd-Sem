#include <stdio.h>
#define maxsize 8

int item[maxsize];
int f = -1, r = -1;

int isFull()
{
    return ((r + 1) % maxsize == f);
}

int isEmpty()
{
    return (f == -1);
}

void Enqueue(int x)
{
    if (isFull())
    {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty())
    {
        f = 0;
    }

    r = (r + 1) % maxsize;
    item[r] = x;

    printf("Enqueued: %d\n", x);
}

int Dequeue()
{
    int x;

    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }

    x = item[f];

    if (f == r)   // last element
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1) % maxsize;
    }

    return x;
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = f;
    while (1)
    {
        printf("%d ", item[i]);
        if (i == r)
            break;
        i = (i + 1) % maxsize;
    }
    printf("\n");
}

int main()
{
    Enqueue(10);
    Enqueue(11);
    Enqueue(12);

    printf("Dequeued: %d\n", Dequeue());

    display();

    return 0;
}
