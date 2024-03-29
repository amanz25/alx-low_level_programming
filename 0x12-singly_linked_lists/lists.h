#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_t *nodeptr;
/**
 * struct list_t - structure for linked list
 * @str: string
 * @len: length of the string
 * @next: pointer to the next linked list
 */
typedef struct list_t
{
	char *str;
	int len;
	nodeptr next;

} list_t;


size_t print_list(const list_t *h);
int _putchar(char c);
void print_num(int num);
void print_string(char *s);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int string_len(const char *s);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
