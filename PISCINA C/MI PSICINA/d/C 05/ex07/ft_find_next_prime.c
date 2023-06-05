/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:21:46 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/01 17:25:25 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_prime_founded(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	while (nb / i >= i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_prime_founded(nb))
		nb++;
	return (nb);
}
/*
int	main (void)
{
	int	nb = 2;
	int	nc = 43;
	int	nd = 1;
	int	ne = 0;
	int	nf = 95198;

	printf("%d siguiente primo: [%d]\n", nb, ft_find_next_prime(nb));
	printf("%d siguiente primo: [%d]\n", nc, ft_find_next_prime(nc));
	printf("%d siguiente primo: [%d]\n", nd, ft_find_next_prime(nd));
	printf("%d siguiente primo: [%d]\n", nf, ft_find_next_prime(nf));
	printf("%d siguiente primo: [%d]", ne, ft_find_next_prime(ne));
}*/
