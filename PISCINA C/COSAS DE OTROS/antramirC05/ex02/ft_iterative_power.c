/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:18:07 by antramir          #+#    #+#             */
/*   Updated: 2022/02/26 18:09:53 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	salida;

	i = 0;
	salida = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else if ((power == 1) || (nb == 0 && power == 0))
		return (1);
	else
	{
		while (i + 1 < power)
		{
			if (i == 0)
				salida = nb * nb;
			else
				salida = salida * nb;
			i++;
		}
		return (salida);
	}
}
/*
int	main(void)
{
	int	i;
	int	j;

	i = 2;
	j = -5;
	while (j < 20)
	{
		printf("%d base %d = %d\n", i, j, ft_iterative_power(i, j));
		j++;
	}
}
*/
