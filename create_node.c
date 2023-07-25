#include"push_swap.h"

a_list	*create_node(a_list **head, int index)
{
	a_list	*l;
	
	l = (a_list*)malloc(sizeof(a_list));
	if (l == NULL)
	{
			// メモリの解放
		a_list* current = *head;
		int	i = 0;
		if (index == -1)
			free(current);
		while (i < index)
		{
			a_list* temp = current;
			current = current->next;
			free(temp);
			i++;
		}
		printf("Memory allocation failed.\n");
		exit(1);
	}
	return (l);
}