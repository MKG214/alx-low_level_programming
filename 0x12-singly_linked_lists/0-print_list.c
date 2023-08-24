#include "lists.h"

/**
 * _strlen - return the lenght of a string
 * @s: the string whose lenght to check s 
 *
 * Return: the number of nodes printed
 */
int _strlen(char *s)
{
  int i =0;

  if (!s)
    return (0);
  while (*s++)
    i++;
  return (i);
}

 /**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
