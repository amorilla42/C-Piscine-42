/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:54:57 by barbizu-          #+#    #+#             */
/*   Updated: 2022/03/01 13:17:06 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	distancia(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	dist;
	int	*tab;
	int	cnt;

	tab = NULL;
	if (min >= max)
		return (0);
	if (max > min)
	{
		dist = distancia(min, max);
		tab = (int *)malloc(sizeof(*tab) * dist);
		cnt = 0;
		i = min;
		while (i < max)
		{
			tab[cnt] = i;
			++i;
			++cnt;
		}
	}
	return (tab);
}
/*#include <unistd.h>
#include <stdio.h>
int main()
{
	int	*tab;
	tab = ft_range(3, 5);
	int	cnt;
	cnt = 0;
	while (cnt < 2)
	{
		printf("%d", tab[cnt]);
		++cnt;
	}
	return (0);
}*/
