/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:48:07 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/16 18:21:12 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	ordenado;

	ordenado = 0;
	i = 0;
	while (ordenado < (size - 1))
	{
		if (tab[i % size] > tab[(i + 1) % size] && ((i % size) != (size - 1)))
		{
			aux = tab[i % size];
			tab[i % size] = tab[(i + 1) % size];
			tab[(i + 1) % size] = aux;
			ordenado = 0;
		}
		else
		{
			ordenado++;
		}
		i++;
	}		
}
/*
int main(){

	int a[4]={4,3,9,1};
	printf("%d %d %d %d ",a[0],a[1],a[2],a[3]);
	ft_sort_int_tab(a,4);
	printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
	
	return 0;
}
*/
