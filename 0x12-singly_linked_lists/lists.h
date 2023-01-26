#ifndef LISTS_H
#define LISTS_H

typedef struct list_t *nodeptr;
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

#endif
