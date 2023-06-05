/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:14:34 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/22 18:14:26 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	string_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cont;
	unsigned int	src_count;

	src_count = string_length(src);
	if (size == 0)
		return (src_count);
	cont = 0;
	while (dest[cont])
		cont++;
	i = 0;
	while (src[i] && cont + i < (size - 1))
	{	dest[i + cont] = src[i];
		i++;
	}
	if (i < size)
		dest[cont + i] = '\0';
	if (cont > size)
		return (src_count + size);
	return (cont + src_count);
}

int	main(void)
{
	char src[] = "Network";
	char dest[] = "42";
	printf("%d", ft_strlcat(dest,src,9));
}
