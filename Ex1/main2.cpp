#include <iostream>
#include "Stack.h"

int main2()
{
    Stack myStack;
    initStack(&myStack);
    std::cout << "Is stack empty? ";
    if (isEmpty(&myStack))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    std::cout << "Pushing elements onto the stack..." << std::endl;
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    std::cout << "Is stack empty? ";
    if (isEmpty(&myStack))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    std::cout << "Popping elements from the stack..." << std::endl;
    int poppedValue = pop(&myStack);
    if (poppedValue != -1)
    {
        std::cout << "Popped: " << poppedValue << std::endl;
    }
    else
    {
        std::cout << "Popped: Failure" << std::endl;
    }
    poppedValue = pop(&myStack);
    if (poppedValue != -1)
    {
        std::cout << "Popped: " << poppedValue << std::endl;
    }
    else
    {
        std::cout << "Popped: Failure" << std::endl;
    }
    poppedValue = pop(&myStack);
    if (poppedValue != -1)
    {
        std::cout << "Popped: " << poppedValue << std::endl;
    }
    else
    {
        std::cout << "Popped: Failure" << std::endl;
    }
    poppedValue = pop(&myStack);
    cleanStack(&myStack);
    return 0;
}
