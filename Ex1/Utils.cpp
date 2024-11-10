#include "Utils.h"
#include "Stack.h"
#include <iostream>
#define ARR_LEN 10

/*
function reverses an array
input: nums - the array that is revered, size - the size of the array that is reversed
output: none
*/
void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* stack = new Stack;
	initStack(stack);
	for (i = 0; i < size; i++) // adding the elements to a stack
	{
		push(stack, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(stack); // removing the nodes in lifo reverses the order
	}
	cleanStack(stack);
	delete stack;
}

/*
function gets 10 elements and reverses the array created from them
input: none
output: nums - the array that got reversed
*/
int* reverse10()
{
	int* nums = new int[ARR_LEN];
	int i = 0;
	for (i = 0; i < ARR_LEN; i++)
	{
		std::cout << "Enter number: ";
		std::cin >> nums[i]; // getting 10 values
	}
	reverse(nums, ARR_LEN); // reversing the order of the array
	return(nums);
}