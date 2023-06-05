/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:31:38 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/28 20:09:45 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	index;
	int	aux;

	aux = nb;
	index = 2;
	if (aux <= 0)
		return (0);
	if (aux == 1)
		return (1);
	if (aux >= 2)
	{
		aux = index * index;
		while (aux <= nb && index <= 46341)
		{
			if (aux == nb)
				return (index);
			index++;
			aux = index * index;
		}
	}
	return (0);
}
/*

int main (void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(121));
	printf("%d", ft_sqrt(225000000));
printf("%d\n", ft_sqrt(2147483647));
printf("%d\n", ft_sqrt(2147483647));
printf("%d\n", ft_sqrt(2147483647));
printf("%d\n", ft_sqrt(2147483647));
printf("%d\n", ft_sqrt(2147483647));
printf("%d\n", ft_sqrt(2147483647));
printf("%d\n", ft_sqrt(2147483647));
}
*/
