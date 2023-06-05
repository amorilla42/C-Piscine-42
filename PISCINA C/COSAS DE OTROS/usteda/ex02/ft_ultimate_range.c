/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:27:30 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/02 18:32:27 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
#include<stdio.h>
int	main(void)
{
	int *range;
	int i;

	i = 0;
	printf("longitud ===== %d\n", ft_ultimate_range(&range, -5, 10));
	while (i < 15)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
