/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imenor-u <imenor-u@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:24 by imenor-u          #+#    #+#             */
/*   Updated: 2022/02/24 19:11:01 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write (1, &z, 1);
		z--;
	}
}

int main(){
ft_print_reverse_alphabet();
return 0;
}
