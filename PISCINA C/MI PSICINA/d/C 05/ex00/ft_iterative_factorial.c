/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:37 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/28 12:41:28 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	num;

	fact = 1;
	num = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (num > 0)
		{
			fact *= num;
			num--;
		}
		return (fact);
	}
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(10));

}
*/
