/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imenor-u <imenor-u@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:14:55 by imenor-u          #+#    #+#             */
/*   Updated: 2022/02/24 19:20:02 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb(int a, int b);

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b =0;
	while (a <= 98)
	{
		b = a +1;
		while (b <= 99)
		{
			ft_print_comb(a, b);
			if (a < 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	ft_print_comb(int a, int b)
{
	char	c[5];

	c[0] = a / 10 + '0';
	c[1] = a % 10 + '0';
	c[2] = ' ';
	c[3] = b / 10 + '0';
	c[4] = b % 10 + '0';
	write (1, c, 5);
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}
