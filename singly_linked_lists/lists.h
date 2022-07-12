#ifndef _LISTITA_
#define _LISTITA_

#include <stdio.h>

/**
 * struct list_s -linked list
 * @str: string
 * @len: len of string
 * @next: the next node
 *
 * Description: aaa
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
