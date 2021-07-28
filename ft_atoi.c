static void	space_sign(char *str, int *count, int *sign);
int	ft_atoi(char *str)
{
	int		nbr;
	int		sign;
	int		count;

	nbr = 0;
	space_sign(str, &count, &sign);
	while (str[count] >= '0' && str[count] <= '9')
	{
		nbr *= 10;
		nbr += (str[count] - '0');
		count++;
	}
	return (nbr * sign);
}

static void	space_sign(char *str, int *count, int *sign)
{
	*sign = 1;
	*count = 0;
	while (str[*count] == 32 || (str[*count] > 8 && str[*count] < 14))
		*count += 1;
	while (str[*count] == '-' || str[*count] == '+')
	{
		if (str[*count] == '-')
			*sign *= -1;
		*count += 1;
	}
}
