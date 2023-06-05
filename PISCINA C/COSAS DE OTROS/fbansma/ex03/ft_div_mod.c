/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasma <fbasma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:48:21 by fbasma            #+#    #+#             */
/*   Updated: 2022/02/24 19:46:00 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d\n= %d\nresto = %d\n", a, b, div, mod);
	return (0);
}
*/
