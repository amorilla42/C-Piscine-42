/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:31:59 by antramir          #+#    #+#             */
/*   Updated: 2022/03/02 12:51:08 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i < 46341)
		i++;
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}
#include <stdio.h>
int	main(void)
{
	printf("Raiz cuadrada de %d es %d\n", -5, ft_sqrt(-5));
	printf("Raiz cuadrada de %d es %d\n", 49, ft_sqrt(49));
	printf("Raiz cuadrada de %d es %d\n", 3, ft_sqrt(3));
	
	printf("Raiz cuadrada de %d es %d\n", 97535376, ft_sqrt(97535376));
	printf("Raiz cuadrada de %d es %d\n", 97535377, ft_sqrt(97535377));
	
	printf("Raiz cuadrada de %d es %d\n", 0, ft_sqrt(0));
	
}
