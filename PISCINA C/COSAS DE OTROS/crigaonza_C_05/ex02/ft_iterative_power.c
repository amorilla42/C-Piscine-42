/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:39:35 by crigonza          #+#    #+#             */
/*   Updated: 2022/02/26 11:05:30 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = nb;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb = pow * nb;
		power --;
	}
	return (nb);
}

/*#include<stdio.h>

int main(void)
{
	int x;

	x = ft_iterative_power(5, 1);
	printf("%d\n", x);
	return (0);
}*/
