#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);
int _strlen(const char *);
size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void free_list(list_t *);


#endif
