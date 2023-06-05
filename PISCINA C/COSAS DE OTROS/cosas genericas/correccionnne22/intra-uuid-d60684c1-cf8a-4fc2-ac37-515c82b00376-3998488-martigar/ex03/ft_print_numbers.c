/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martigar <martigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:58 by martigar          #+#    #+#             */
/*   Updated: 2022/02/19 13:36:34 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = '1';
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}

int	main(void)
{
	ft_print_numbers();
						
								return      0;
}
