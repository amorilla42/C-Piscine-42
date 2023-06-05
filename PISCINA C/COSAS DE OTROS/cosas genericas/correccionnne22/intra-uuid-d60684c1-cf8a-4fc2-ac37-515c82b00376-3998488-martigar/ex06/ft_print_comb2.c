/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martigar <martigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:54:39 by martigar          #+#    #+#             */
/*   Updated: 2022/02/19 13:39:59 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	f1;
	int	f2;

	f1 = 0;
	f2 = 0;
	while (f1 <= 98)
	{
		f2 = f1 + 1;
		while (f2 <= 99)
		{
			ft_write((f1 / 10 + '0'), (f1 % 10 + '0'));
			write(1, " ", 1);
			ft_write((f2 / 10 + '0'), (f2 % 10 + '0'));
			if (f1 <= 98 || f2 <= 99)
			{
				write(1, ", ", 2);
			}
			f2++;
		}
		f1++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
