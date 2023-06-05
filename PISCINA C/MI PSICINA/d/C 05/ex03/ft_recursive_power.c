/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:58:53 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/28 16:05:47 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pow;

	pow = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (pow);
}
/*
#include<stdio.h>
int main(){
	printf("%d ",ft_recursive_power(2,2));
	printf("%d ",ft_recursive_power(2,3));
	printf("%d ",ft_recursive_power(3,4));
	printf("%d ",ft_recursive_power(4,5));
}
*/
