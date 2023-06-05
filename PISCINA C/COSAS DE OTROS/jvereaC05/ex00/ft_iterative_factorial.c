/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverea-a <jverea-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:18:01 by jverea-a          #+#    #+#             */
/*   Updated: 2022/02/28 17:19:33 by jverea-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	coun;

	result = 1;
	coun = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (coun > 0)
	{
		result *= coun;
		coun--;
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
	int	nb = 5;

	nb = ft_iterative_factorial(nb);
	printf("%d", nb);
}*/
