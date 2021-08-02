/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:36:23 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/02 14:36:31 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space_counter(const char	*s);
static int	positive_negative_finder(const char	*s, int	*sign);

int	ft_atoi(const char	*str)
{
	int		nbr;
	int		sign;
	int		count;

	nbr = 0;
	sign = 1;
	count = space_counter(str);
	count += positive_negative_finder(str, &sign);
	while (ft_isdigit(str[count]))
	{
		nbr *= 10;
		nbr += (str[count] - '0');
		count++;
	}
	return (nbr * sign);
}

static int	space_counter(const char	*s)
{
	int	count;

	count = 0;
	while (s[count] == 32 || (s[count] > 8 && s[count] < 14))
		count += 1;
	return (count);
}

static int	positive_negative_finder(const char	*s, int	*sign)
{
	int	count;

	count = 0;
	while (s[count] == '-' || s[count] == '+')
	{
		if (s[count] == '-')
			*sign *= -1;
		count += 1;
	}
	return (count);
}
