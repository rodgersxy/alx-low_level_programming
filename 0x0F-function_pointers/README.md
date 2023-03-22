#0x0F. C - Function pointers
##General
What are function pointers and how to use them
What does a function pointer exactly hold
Where does a function pointer point to in the virtual memory
Tasks
0. What's my name
Write a function that prints a name.
Prototype: void print_name(char *name, void (*f)(char *));
1. If you spend too much time thinking about a thing, you'll never get it done
mandatory
Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use
2. To hell with circumstances; I create opportunities
mandatory
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1
