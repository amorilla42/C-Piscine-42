/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:57:53 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/28 15:08:35 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	tab = malloc(sizeof (*tab) * len);
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

#include<stdio.h>
int	main(void)
{
	int *array;
	int min;
	int max;
	
	min = -5;
	max = 10;
	array = ft_range(min, max);
	while (min <= max + 10)
	{
		printf("%d\n", *array++);
		min++;
	}
}

