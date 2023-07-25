
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int     data;
	int     s_index;
	struct  Node* next;
	struct  Node* prev;
} a_list;

typedef struct Node2
{
    int		data;
	int		s_index;
    struct	Node2* next;
    struct	Node2* prev;
} b_list;

a_list  *create_node(a_list **head, int index);
int     ft_atoi_int(const char *str);
void    a_list_tail_add(a_list **head, a_list** tail, int value, int index);
void    a_list_head_add(a_list** tail, a_list** head, int value, int index);
void	numeric_check(const char *str, int index);
void    print_error(void);
void	swap_one(void);
void	swap_two(a_list **head);
void	swap_three(a_list **a_head);
void	swap_less_than_six(a_list **a_head, int a_list_size);
void	add_sentinel_node(a_list** head, a_list **tail);
int		find_list_median(a_list **a_head, int size);
#endif
