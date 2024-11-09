#include "Queue.h"
#include <iostream>

int main12()
{
    Queue q;
    initQueue(&q, 5);
    std::cout << "Queue is empty: ";
    if (isEmpty(&q)) 
    {
        std::cout << "True";
    }
    else 
    {
        std::cout << "False";
    }
    std::cout << std::endl;
    std::cout << "Enqueuing elements: 10, 20, 30, 40, 50" << std::endl;
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    std::cout << "Enqueuing an element when full (60)" << std::endl;
    enqueue(&q, 60);
    std::cout << "Queue is full: ";
    if (isFull(&q)) 
    {
        std::cout << "True";
    }
    else 
    {
        std::cout << "False";
    }
    std::cout << std::endl;
    std::cout << "Dequeuing elements: ";
    while (!isEmpty(&q))
    {
        std::cout << dequeue(&q) << " ";
    }
    std::cout << std::endl;
    std::cout << "Queue is empty after dequeue: ";
    if (isEmpty(&q)) 
    {
        std::cout << "True";
    }
    else 
    {
        std::cout << "False";
    }
    std::cout << std::endl;
    cleanQueue(&q);
    return 0;
}
