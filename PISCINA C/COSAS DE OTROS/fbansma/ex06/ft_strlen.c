/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasma <fbasma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:24:57 by fbasma            #+#    #+#             */
/*   Updated: 2022/02/24 19:49:36 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
	write(1, &a, 1);
}
/*
int	main(void)
{
	int	a;

	a =	ft_strlen("bigote");
	printf("%d", a);
	return (0);
}*/
