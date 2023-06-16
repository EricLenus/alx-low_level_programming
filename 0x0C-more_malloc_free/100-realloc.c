#include <stdlib.h>
#include "main.h"
/**
 * _realoc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory allocated by malloc
 * @old_size: size of memory allocated for pointer
 * @new_size: new size of memory block
 *
 * Return: newly allocated pointer to memory block
 */
void*_realloc(void*ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size;i++)
			ptr1[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0l i < old_size;i++)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);
	return(ptr1);
}
