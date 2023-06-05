/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martigar <martigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:44:34 by martigar          #+#    #+#             */
/*   Updated: 2022/02/19 12:42:33 by martigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int numero)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (numero >= 0)
	{
		write (1, &p, 1);
	}
	else
	{
		write (1, &n, 1);
	}
}

/*int	main(void)
{
	ft_is_negative (-124);
}*/
