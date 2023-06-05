/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:04:28 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/01 17:35:22 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if ((nb == 0 || nb == 1) || nb < 0)
		return (0);
	while (i < nb && nb % 2 == 1 && nb % 3 != 0 && nb % 5 != 0)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	int i=0;
	while(i<2147483647){
		
		printf("%d  es primo??? =  %d \n",i,ft_is_prime(i));
		i++;
	}
}
*/
