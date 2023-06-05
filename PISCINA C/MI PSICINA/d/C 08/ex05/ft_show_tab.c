/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:07:39 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/03 18:07:53 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_print(char *c)
{
	while (*c)
		write(1, c++, 1);
}

void	ft_print_number(int n)
{
	char	c;

	if (n == -2147483648)
		write(1, "-2147483648", 1);
	else if (n < 0)
		ft_print_number(-n);
	else if (n >= 10)
	{
		ft_print_number(n / 10);
		ft_print_number(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	struct s_stock_str	s;
	int					i;

	if (!par)
		return ;
	i = 0;
	s = par[i];
	while (s.str)
	{
		ft_print(s.str);
		ft_print("\n");
		ft_print_number(s.size);
		ft_print("\n");
		ft_print(s.copy);
		ft_print("\n");
		s = par[++i];
	}
}
