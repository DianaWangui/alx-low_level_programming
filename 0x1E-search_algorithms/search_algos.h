#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
/*int binary_search(int *array, size_t size, int value);*/
int binary_search(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

 



#endif /* _SEARCH_ALGOS_H_ */