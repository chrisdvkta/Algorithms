#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

struct ArrayQueue
{
    int front, rear;
    int capacity;
    int *array;
};

struct ArrayQueue *Queue(int size)
{
    struct ArrayQueue *Q = (struct ArrayQueue *)malloc(sizeof(struct ArrayQueue));
    if (!Q)
    {
        return NULL;
    }
    Q->capacity = size;
    Q->front = Q->rear = -1;
    Q->array = (int *)malloc(Q->capacity * sizeof(int));
};

int IsEmptyQueue(struct ArrayQueue *q)
{
    return (q->front == -1);
}

int IsFullQueue(struct ArrayQueue *q)
{
    return ((q->rear + 1) % q->capacity == q->front);
}

void Enqueue(struct ArrayQueue *q, int data)
{
    if (IsFullQueue(q))
    {
        cout << "Queue overflow" << endl;
    }
    else
    {
        q->rear = (q->rear + 1) % q->capacity;
        q->array[q->rear] = data;
        if (q->front == -1)
        {
            q->front = q->rear;
        }
    }
}

int Dequeue(struct ArrayQueue *q)
{
    int data = 0;
    if (IsEmptyQueue(q))
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        data = q->array[q->front];
        if (q->front == q->rear)
        {
            q->front = q->rear = -1;
        }
        else
            q->front = (q->front + 1) % q->capacity;
    }
    return data;
}

void deleteQueue(struct ArrayQueue *q)
{
    if (q)
    {
        if (q->array)
        {
            free(q->array);
        }
        free(q);
    }
}
