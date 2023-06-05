/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarcon <falarcon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:09:04 by falarcon          #+#    #+#             */
/*   Updated: 2022/03/02 17:42:07 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i < nb / 2)
	{
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(25));
}

