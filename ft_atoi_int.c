#include"push_swap.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

static int	check_overflow(int m, unsigned long long a)
{
	if (m == 1 && a >= 2147483648)
		return (-1);
	if (m == -1 && a >= 2147483649)
		return (0);
	return (2);
}

int	ft_atoi_int(const char *str)
{
	int						i;
	unsigned long long		ans;
	int						minus_flag;
	int						result;

	i = 0;
	minus_flag = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		minus_flag = -1;
		i++;
	}
	ans = 0;
	numeric_check(str, i);//If non-numeric values are entered in argv.
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + (str[i] - '0');
		result = check_overflow(minus_flag, ans);
		if (result != 2)
			print_error();
		i++;
	}
	return ((int)ans * minus_flag);
}