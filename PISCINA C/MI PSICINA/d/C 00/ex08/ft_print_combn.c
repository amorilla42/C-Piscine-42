/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:44:49 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/15 19:20:54 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printnumero(int n, int *a)
{
	int		i;
	int		b;
	char	c;

	b = 1;
	i = 1;
	while (i < n)
	{
		if (a[i - 1] >= a[i])
			b = 0;
		i++;
	}
	i = 0;
	if (b == 1)
	{
		while (i < n)
		{
			c = a[i] + 48;
			write(1, &c, 1);
			i++;
		}
		if (a[0] != (10 - n))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	a[9];
	int	i;

	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
	while (a[0] <= (10 - n) && n > 0 && n < 10)
	{
		ft_printnumero(n, a);
		a[n - 1]++;
		i = n - 1;
		while (i >= 1)
		{
			if (a[i] > 9)
			{
				a[i] = 0;
				a[i - 1]++;
			}
			i--;
		}
	}
}
/*
int main(){
ft_print_combn(1);
	return 0;
}
*/
