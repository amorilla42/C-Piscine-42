/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:56:47 by crigonza          #+#    #+#             */
/*   Updated: 2022/02/28 18:28:07 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483629)
		return (2147483647);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

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

/*#include<stdio.h>

int main(void)
{
    int x = ft_find_next_prime(2147483630);
    printf("%d\n", x);
    return (0);
}*/
