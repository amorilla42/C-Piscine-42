/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:10:52 by antramir          #+#    #+#             */
/*   Updated: 2022/02/24 20:16:55 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	if ((power == 0) || (nb == 0 && power == 0))
		return (1);
	if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power -1);
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("1 base -1 = %d\n", ft_recursive_power(1, -1));
	printf("0 base 0 = %d\n", ft_recursive_power(0, 0));
	printf("2 base 1 = %d\n", ft_recursive_power(2, 1));
	printf("2 base 2 = %d\n", ft_recursive_power(2, 2));
	printf("10 base 2 = %d\n", ft_recursive_power(10, 2));
	printf("8 base 2 = %d\n", ft_recursive_power(8, 2));
	printf("2 base 5 = %d\n", ft_recursive_power(2, 5));
	printf("0 base 0 = %d\n", ft_recursive_power(0, 0));
}
*/
