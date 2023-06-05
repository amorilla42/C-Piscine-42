/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:27:09 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/28 15:09:11 by amorilla         ###   ########.fr       */
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

#include<stdio.h>
int	main(void)
{
	int *range;
	int i;

	i = 0;
	printf(":: %d\n", ft_ultimate_range(&range, -5, 10));
	while (i < 16)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}

