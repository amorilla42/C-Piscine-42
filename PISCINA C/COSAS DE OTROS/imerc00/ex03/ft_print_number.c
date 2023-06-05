/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imenor-u <imenor-u@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:22:11 by imenor-u          #+#    #+#             */
/*   Updated: 2022/02/24 19:12:54 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_number(void)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
		write (1, &a, 1);
		a++;
	}
}

int	main()
{
	ft_print_number();
	return (0);
}
