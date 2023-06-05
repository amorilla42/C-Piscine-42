/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaparic <raaparic@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:28:26 by raaparic          #+#    #+#             */
/*   Updated: 2022/02/17 18:17:44 by raaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_escribir(int n1, int n2);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	fn;
	int	sn;

	fn = 0;
	sn = 0;
	while (fn <= 98)
	{
		sn = fn + 1;
		while (sn <= 99)
		{
			ft_escribir(fn, sn);
			if (fn < 98)
				write (1, ", ", 2);
			sn++;
		}
		fn++;
	}	
}

void	ft_escribir(int n1, int n2)
{
	char	num[5];

	num[0] = n1 / 10 + '0';
	num[1] = n1 % 10 + '0';
	num[2] = ' ';
	num[3] = n2 / 10 + '0';
	num[4] = n2 % 10 + '0';
	write (1, num, 5);
}
