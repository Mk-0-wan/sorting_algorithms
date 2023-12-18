#ifndef _SORT_H
#define _SORT_H

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#define Swap2(a, b) \
	do {\
		if ((a) != (b))\
		{\
			(b) ^= (a) ^= (b);\
			(a) ^= (b);\
		} \
	} while (0)

typedef unsigned long int ul;
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*Builtin header files */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
#endif
