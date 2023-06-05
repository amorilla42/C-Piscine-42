/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverea-a <jverea-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:18:18 by jverea-a          #+#    #+#             */
/*   Updated: 2022/03/01 18:03:33 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tempnb;

	tempnb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= tempnb;
		power--;
	}
	return (nb);
}

#include <stdio.h>
int main()
{
	int nb = 5;
	int power = 2;

	printf("%d", ft_iterative_power(nb, power));
}
