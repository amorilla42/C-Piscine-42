/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverea-a <jverea-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:05:56 by jverea-a          #+#    #+#             */
/*   Updated: 2022/03/01 18:09:52 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	int nb = 13;

	printf("%d", ft_is_prime(nb));
}
