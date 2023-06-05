/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:20:49 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/21 10:51:17 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	cont;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	cont = 0;
	while (src[cont] != '\0')
	{
		dest[i++] = src[cont++];
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "España";
	char	dest[] = "Arriba";
	
	printf("%s",ft_strcat(dest,src));
}*/