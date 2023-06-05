/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarquez <cmarquez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:07:38 by cmarquez          #+#    #+#             */
/*   Updated: 2022/02/22 17:35:28 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31)
			|| str[i] == 127)
			return (0);
			i++;
	}
	return (1);
}
int main (void)
{
	char yes[] = "hola";
	char no[] = "\1B";
	char nothing[] = " ";

	printf("%d\n", ft_str_is_printable(yes));
	printf("%d\n", ft_str_is_printable(no));
	printf("%d\n", ft_str_is_printable(nothing));
}
