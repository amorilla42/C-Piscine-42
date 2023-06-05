/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:51:31 by crigonza          #+#    #+#             */
/*   Updated: 2022/02/26 10:04:23 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		fac = fac * nb;
		nb --;
	}
	return (fac);
}

/*#include<stdio.h>

int main(void)
{
	int x;

	x = ft_iterative_factorial(4);
	printf("%d", x);
}*/
