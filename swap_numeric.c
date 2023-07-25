#include"push_swap.h"
void	swap_one(void)
{
	printf("OK\n");
}

void swap_sa(a_list **a_head)
{
    a_list	*one;
    a_list	*two;
	int		tmp;

	one = *a_head;
	two = (*a_head)->next;
    tmp = one->data;
    one->data = two->data;
    two->data = tmp;
    printf("sa\n");
}

void swap_two(a_list **a_head)
{
    a_list	*one;
    a_list	*two;

	one = *a_head;
	two = (*a_head)->next;
    if (one->data > two->data)
		swap_sa(a_head);
}

void	swap_ra(a_list **a_head)
{
    a_list	*one;
    a_list	*two;
	a_list	*three;
	int		tmp;

	one = *a_head;
	two = (*a_head)->next;
	three = (*a_head)->next->next;
    tmp = one->data;
    one->data = two->data;
    two->data = three->data;
	three->data = tmp;
    printf("ra\n");
}

void	swap_rra(a_list **a_head)
{
    a_list	*one;
    a_list	*two;
	a_list	*three;
	int		tmp;

	one = *a_head;
	two = (*a_head)->next;
	three = (*a_head)->next->next;
    tmp = three->data;
    three->data = two->data;
    two->data = one->data;
	one->data = tmp;
    printf("rra\n");
}

void	swap_three(a_list **a_head)
{
	a_list	*one;
    a_list	*two;
	a_list	*three;

	one = *a_head;
	two = (*a_head)->next;
	three = (*a_head)->next->next;
	if (three->data > one->data && one->data > two->data)
		swap_sa(a_head);
	if (one->data > two->data && two->data > three->data)
		swap_sa(a_head);
	if (two->data > three->data && three->data > one->data)
		swap_sa(a_head);
	if (one->data > three->data && three->data > two->data)
		swap_ra(a_head);
	if (two->data > one->data && one->data > three->data)
		swap_rra(a_head);
}

void	swap_less_than_six(a_list **a_head, int a_list_size)
{
	int median;
	int	index;

	median = find_list_median(a_head, a_list_size);
	index = 0;
	while (index++ < a_list_size)
	{

	}
}