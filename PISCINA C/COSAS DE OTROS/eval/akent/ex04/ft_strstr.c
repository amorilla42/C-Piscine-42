/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:52:36 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/21 11:04:01 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (*str)
	{
		if (*str == to_find[0])
		{
			i = 0;
			j = 0;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					j = 1;
				i++;
			}
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "En un lugar de la mancha";
	char	find[] = "lugar";

	printf("%s",ft_strstr(str,find));
}*/