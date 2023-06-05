/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:02:50 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/16 16:46:45 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}
/*
int  main(){

	int size=4;
	int a[4]={1,2,3,4};
	printf("%d %d %d %d ",a[0],a[1],a[2],a[3]);
	ft_rev_int_tab(a,size);
	printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
	return 0;
}
*/
