/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:37:10 by crigonza          #+#    #+#             */
/*   Updated: 2022/02/28 19:23:18 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb == 4)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

#include<stdio.h>

int main(void)
{
    int x = ft_is_prime(4);
    printf("%d\n", x);
}
