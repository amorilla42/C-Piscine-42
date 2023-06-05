/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:22:42 by crigonza          #+#    #+#             */
/*   Updated: 2022/02/28 10:10:41 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

/*#include<stdio.h>

int main(void)
{
	int x;

	x = ft_recursive_power(6, 5);
	printf("%d\n", x);
	return (0);
}*/
