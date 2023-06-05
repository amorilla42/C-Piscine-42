/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:19:11 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/02 18:26:27 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	array = malloc(sizeof(*array) * len);
	if (!array)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
#include<stdio.h>
int	main(void)
{
	int *array;
	int min;
	int max;
	int i = 0;

	min = -5;
	max = 1000;
	array = ft_range(min, max);
	while (min < max )
	{
		printf("%d\n", array[i]);
		i++;
		min++;
	}
}
*/
