/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:39:40 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/28 15:06:58 by amorilla         ###   ########.fr       */
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

#include<stdio.h>
int	main(void)
{
	char str1[] = "hello world";
	char str2[] = "toto_rata";
	
	(void) str2;
	printf("%s\n", ft_strdup(str2));
	printf("%s\n", ft_strdup(str2));
	printf("%s\n", ft_strdup(str2));
	printf("%s\n", ft_strdup(str1));
	printf("%s\n", ft_strdup(str1));
	printf("%s\n", ft_strdup(str1));
}

