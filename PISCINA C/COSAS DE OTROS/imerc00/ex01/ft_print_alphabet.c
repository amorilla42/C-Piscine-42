/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imenor-u <imenor-u@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:24:00 by imenor-u          #+#    #+#             */
/*   Updated: 2022/02/22 16:22:23 by imenor-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alhpabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write (1, &a, 1);
		a++;
	}
}	