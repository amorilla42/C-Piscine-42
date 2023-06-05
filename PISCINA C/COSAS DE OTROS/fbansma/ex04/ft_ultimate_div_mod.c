/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasma <fbasma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:03:38 by fbasma            #+#    #+#             */
/*   Updated: 2022/02/24 19:47:10 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d   -  %d\n", a, b);
	return (0);
}*/
