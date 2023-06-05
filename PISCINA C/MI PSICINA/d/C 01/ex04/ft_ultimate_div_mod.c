/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:51:20 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/16 13:05:34 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;
	int	aux2;

	if (*b != 0)
	{	
		aux1 = *a;
		aux2 = *b;
		*a = aux1 / aux2;
		*b = aux1 % aux2;
	}
}
/*
int main(){

	int a=31,b=0;
	ft_ultimate_div_mod(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
*/
