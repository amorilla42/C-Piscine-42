/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasma <fbasma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:12:04 by fbasma            #+#    #+#             */
/*   Updated: 2022/02/24 19:57:36 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	aux;

	a = 0;
	while (a < size / 2)
	{
		aux = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = aux;
		a++;
	}
}

int	main(void)
{
	int	b;
	int	ab[6]={1,2,3,4,5,6};

	b = 0;
	ab[0]=ab[0]+4;
	ab[1]=2;
	ab[0]=1;
	ft_rev_int_tab(ab, 5);
	while (b < 5)
	{
		printf("%d", ab[b]);
		b++;
	}
}
