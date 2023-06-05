/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:45:30 by antramir          #+#    #+#             */
/*   Updated: 2022/03/02 11:45:22 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	if (nb < 2)
	{
		return (2);
	}
	prime = 0;
	while (prime != 2)
	{
		prime += ft_is_prime(nb);
		nb++;
	}
	return (nb - 1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i =  -5;
	while (i < 50)
	{
		printf("%d retorna %d\n", i, ft_find_next_prime(i));
		i++;
	}
	return (0);
}
*/
