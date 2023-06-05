/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:02:17 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/03 18:05:03 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	len(char *c)
{
	int	res;

	res = 0;
	while (c[res])
		res++;
	return (res);
}

char	*ft_copy(char *c, int *size)
{
	char	*res;
	int		i;

	*size = len(c);
	res = malloc((*size) * sizeof(char));
	i = 0;
	while (c[i])
	{
		res[i] = c[i];
		i++;
	}
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					len;
	char				*cpy;
	int					i;
	struct s_stock_str	*res;

	res = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!res)
		return (0);
	i = 0;
	while (i < ac)
	{
		cpy = ft_copy(av[i], &len);
		res[i].size = len;
		res[i].str = av[i];
		res[i].copy = cpy;
		i++;
	}
	res[i].size = 0;
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}
