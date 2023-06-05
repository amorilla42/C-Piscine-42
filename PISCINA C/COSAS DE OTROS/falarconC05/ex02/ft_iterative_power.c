/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarcon <falarcon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:26:35 by falarcon          #+#    #+#             */
/*   Updated: 2022/03/02 17:36:47 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (power > 1)
	{
		i = i * nb;
		power --;
	}
	return (i);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2,5));
}

