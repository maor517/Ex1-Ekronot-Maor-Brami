#include "Utils.h"
#include "Stack.h"
#include <iostream>
#define ARR_LEN 10

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* stack = new Stack;
	initStack(stack);
	for (i = 0; i < size; i++)
	{
		push(stack, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(stack);
	}
	cleanStack(stack);
	delete stack;
}

int* reverse10()
{
	int* nums = new int[ARR_LEN];
	int i = 0;
	for (i = 0; i < ARR_LEN; i++)
	{
		std::cout << "Enter number: ";
		std::cin >> nums[i];
	}
	reverse(nums, ARR_LEN);
	return(nums);
}