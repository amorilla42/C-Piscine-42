/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasma <fbasma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:41:27 by fbasma            #+#    #+#             */
/*   Updated: 2022/02/24 19:48:16 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_putstr("hello");
	return (0);
}*/
