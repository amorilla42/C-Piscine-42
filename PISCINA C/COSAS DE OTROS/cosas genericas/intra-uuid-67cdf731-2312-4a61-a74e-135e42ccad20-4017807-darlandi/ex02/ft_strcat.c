/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darlandi <darlandi@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:56:49 by darlandi          #+#    #+#             */
/*   Updated: 2022/02/19 17:06:49 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x])
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char a[] = "hola ";
	char b[] = "mundo";
	char *res;
	res = ft_strcat(a, b);
	printf("%s", res);
	return (0);
}
