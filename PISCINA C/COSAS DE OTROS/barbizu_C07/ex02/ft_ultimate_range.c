/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:59:33 by barbizu-          #+#    #+#             */
/*   Updated: 2022/03/01 13:20:24 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	distancia(int min, int max)
{
	return (max - min);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	dist;
	int	*tab;
	int	cnt;

	tab = NULL;
	if (min >= max)
		return (0);
	dist = distancia(min, max);
	tab = (int *)malloc(sizeof(*tab) * dist);
	if (!tab)
		return (-1);
	cnt = 0;
	while (min < max)
	{
		tab[cnt] = min;
		++cnt;
		++min;
	}
	*range = tab;
	return (cnt);
}
#include <stdio.h>
int main()
{
	int	*tab;
	int i;
	i = ft_ultimate_range(&tab, 2, 5);
	printf("Tamaño: %d, Tab: %d%d%d", i, tab[0], tab[1], tab[2]);
}
