/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:25:00 by antramir          #+#    #+#             */
/*   Updated: 2022/02/24 18:01:43 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
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
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = -10;
	while (i < 50)
	{
		printf("%d retorna %d\n", i, ft_is_prime(i));
		i++;
	}
	return (0);
}
*/
