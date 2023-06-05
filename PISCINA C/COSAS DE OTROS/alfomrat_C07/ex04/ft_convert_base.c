/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:50:09 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/25 10:03:27 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	check_base(char *base)
{
	int	size;
	int	i;

	size = 0;
	while (*base)
	{
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		if (*base == '-' || *base == '+')
			return (0);
		size++;
		base++;
	}
	return (size);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	nbr;
	int	sign_c;

	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	sign_c = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign_c++;
		str++;
	}
	nbr = get_nbr(*str, base);
	while (nbr != -1)
	{
		number = number * 10;
		number += *str - '0';
		str++;
	}
	if (sign_c % 2)
		number *= -1;
	return (number);
}

int	get_nbr(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nbase_from;
	int nbase_to;

	nbase_from = check_base(base_from);	
	nbase_to = check_base(base_to);
	printf("nbase_from: %d - nbase_to: %d", nbase_from, nbase_to);
	if (nbase_from < 2 || nbase_to < 2)
		return (0);	
}

#include<stdio.h>
int	main(void)
{
	char nbr[] = "assdaff";
	char base1[] = "asdf";
	char base2[] = "qwertyuioq";
	ft_convert_base(nbr, base1, base2);
}
