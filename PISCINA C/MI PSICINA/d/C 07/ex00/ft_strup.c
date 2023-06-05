/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:12:20 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/02 18:18:39 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<errno.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	while (src[i])
		i++;
	new = malloc(sizeof(*new) * (i + 1));
	if (!new)
	{
		errno = ENOMEM;
		return (0);
	}
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include<stdio.h>
int	main(void)
{
	char str1[] = "cualquier cosa";
	char str2[] = ". y digo si me lio";

	(void) str2;
	printf("%s\n", ft_strdup(str2));
	printf("%s\n", ft_strdup(str2));
	printf("%s\n", ft_strdup(str2));
	printf("%s\n", ft_strdup(str1));
	printf("%s\n", ft_strdup(str1));
	printf("%s\n", ft_strdup(str1));
}
*/
