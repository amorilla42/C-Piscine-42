/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:31:21 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/28 15:57:59 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = nb;
	while (power > 1)
	{
		pow = pow * nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (pow);
}
/*
#include<stdio.h>
int main()
{
	printf("%d ",ft_iterative_power(2,2));
printf("%d ",ft_iterative_power(2,3));
printf("%d ",ft_iterative_power(2,4));
printf("%d ",ft_iterative_power(2,10));
}
*/
