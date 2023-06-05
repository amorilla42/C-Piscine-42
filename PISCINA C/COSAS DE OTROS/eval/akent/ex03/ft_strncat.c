/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:37:03 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/21 10:51:47 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		cont;

	i = 0;
	cont = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[cont] && cont < nb)
	{
		dest[i] = src[cont];
		i++;
		cont++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Network";
	char dest[] = "42";
	printf("%s", ft_strncat(dest,src,7));
}
*/