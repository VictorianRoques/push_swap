/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:53:22 by viroques          #+#    #+#             */
/*   Updated: 2021/05/14 13:06:33 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>
#include <limits.h>

int			check_str_is_digit(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			error("Some arguments are not integers");
			return (1);
		}
		i++;
	}
	return (0);
}

int			is_duplicate(char **tab)
{
	int		i;
	int		value;

	i = 0;
	value = ft_atoi(tab[0]);
	while (tab[i])
	{
		if (i > 0 && ft_atoi(tab[i]) == value)
		{
			error("Some arguments are duplicate");
			return (1);
		}
		i++;
	}
	return (0);
}

long		long_atoi(const char *nptr)
{
	int		i;
	int		negativ;
	long	res;

	i = 0;
	negativ = 1;
	res = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
			|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-')
		negativ = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * negativ);
}

int			check_error(char **argv)
{
	int		i;
	long	nb;

	i = 1;
	while (argv[i])
	{
		if (check_str_is_digit(argv[i]))
			return (-1);
		nb = long_atoi(argv[i]);
		if (ft_strlen(argv[i]) > 11 || (nb < INT_MIN || nb > INT_MAX))
		{
			error("Some argument are bigger than an integer");
			return (-1);
		}
		if (is_duplicate(argv + i))
			return (-1);
		i++;
	}
	return (i - 1);
}
