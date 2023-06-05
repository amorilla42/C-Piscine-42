/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:42:36 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/28 15:29:25 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factor;

	factor = 1;
	if (nb > 0)
	{
		factor *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (factor);
}
/*
#include<stdio.h>
int main(){
	printf("%d ",ft_recursive_factorial(3));
	printf("%d ",ft_recursive_factorial(4));
	printf("%d ",ft_recursive_factorial(5));
}
*/
