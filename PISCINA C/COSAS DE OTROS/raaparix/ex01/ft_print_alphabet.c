/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaparic <raaparic@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:11:46 by raaparic          #+#    #+#             */
/*   Updated: 2022/02/20 12:35:37 by raaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char letra)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write (1, &letra, 1);
		letra++;
	}
}
