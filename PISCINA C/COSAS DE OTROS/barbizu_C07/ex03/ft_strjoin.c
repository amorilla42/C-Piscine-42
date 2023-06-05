/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:16:23 by barbizu-          #+#    #+#             */
/*   Updated: 2022/03/01 10:55:13 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_lenght(int size, char **strs, char *sep)
{
	int	i;
	int	tam;

	i = 0;
	tam = 0;
	while (i < size)
	{
		tam += ft_strlen(strs[i]);
		tam += ft_strlen(sep);
		++i;
	}
	return (tam);
}

char	*ft_strcat(char *dest, char *src)
{
	int	cnt;
	int	cnt2;

	cnt = 0;
	cnt2 = 0;
	while (dest[cnt])
	{
		++cnt;
	}
	while (src[cnt2])
	{
		dest[cnt] = src[cnt2];
		++cnt2;
		++cnt;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		tam;
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	else
	{
		tam = ft_lenght(size, strs, sep);
		tab = malloc(sizeof(char) * (tam + 1));
		if (!tab)
			return (0);
		while (i < size - 1)
		{
			tab = ft_strcat(tab, strs[i]);
			tab = ft_strcat(tab, sep);
			++i;
		}
		tab = ft_strcat(tab, strs[i]);
	}
	return (tab);
}
/*#include <stdio.h>
int main()
{
	char	*s1[3];
	s1[0] = "hola";
	s1[1] = "prueba";
	s1[2] = "adios";
	printf("%s", ft_strjoin(3, s1, "//"));
}*/
