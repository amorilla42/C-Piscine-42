/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:00:24 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/15 19:22:01 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printnumbers(char first, char second)
{
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	divide;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_printnumbers(num1 / 10 + 48, num1 % 10 + 48);
			write(1, " ", 1);
			ft_printnumbers(num2 / 10 + 48, num2 % 10 + 48);
			if (num1 < 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
/*
int main()
{
    ft_print_comb2();
    return (0);
}
*/
