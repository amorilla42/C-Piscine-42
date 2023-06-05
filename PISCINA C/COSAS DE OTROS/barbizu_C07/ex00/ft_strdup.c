/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:32:17 by barbizu-          #+#    #+#             */
/*   Updated: 2022/02/26 17:24:18 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		++cnt;
	}
	return (cnt);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	cnt;

	cnt = 0;
	while (src[cnt] != '\0')
	{
		dest[cnt] = src[cnt];
		++cnt;
	}
	dest[cnt] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char	ori[] = "";
	char	dest[] = "";

	ft_strcpy(dest, ori);
	printf("%s", dest);
}*/
