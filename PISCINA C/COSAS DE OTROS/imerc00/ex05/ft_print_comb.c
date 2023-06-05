/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imenor-u <imenor-u@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:29:36 by imenor-u          #+#    #+#             */
/*   Updated: 2022/02/24 19:16:13 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	print_line(int a, int b, int c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '6')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
					print_line(a, b, c);
				c++;
			}	
			c = b + 1;
			b++;
		}
		b = a +1;
		a++;
	}
	write (1, "789", 3);
}		

int	main()
{
	ft_print_comb();
}
