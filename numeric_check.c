#include"push_swap.h"

int	ft_isdigit(char alpha)
{
	if (alpha < '0' || alpha > '9')
	{
		return (0);
	}
	return (1);
}

void	numeric_check(const char *str, int index)
{
	while(str[index] != '\0')
	{
		if (ft_isdigit(str[index]) == 0)
			print_error();
		index++;
	}
}
