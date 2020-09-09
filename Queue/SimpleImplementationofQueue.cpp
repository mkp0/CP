#include <bits/stdc++.h>

using namespace std;

class Queue
{
public:
    int front, rear, size;
    unsigned int capacity;
    int *arr;
};

Queue *createQueue(unsigned int capacity)
{
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = capacity - 1;
    queue->arr = new int[(queue->capacity * sizeof(int))];
    queue->size = 0;
    return queue;
}

int isFull(Queue *queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty(Queue *queue)
{
    return (queue->size == 0);
}

int front(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->front];
}

int rear(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->rear];
}

void enqueue(Queue *queue, int data)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->size = queue->size + 1;
    queue->arr[queue->rear] = data;

    cout << data << " enqueued to queue\n";
}

int dequeue(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    else
    {
        int data = queue->arr[queue->front];
        queue->front = (queue->front + 1) % queue->capacity;
        queue->size = queue->size - 1;
        return data;
    }
}

int main()
{
    Queue *queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    cout << dequeue(queue) << " dequeued from queue\n";

    cout << "Front item is " << front(queue) << endl;
    cout << "Rear item is " << rear(queue) << endl;
    return 0;
}