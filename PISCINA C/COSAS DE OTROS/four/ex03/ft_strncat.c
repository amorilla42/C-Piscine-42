/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournou <efournou@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:24:32 by efournou          #+#    #+#             */
/*   Updated: 2022/02/22 18:35:30 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i) != 0)
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[10] = "Hello Toi";
	char * dest = (char *) malloc(8);
	strcpy(dest, "Coucou");
	char src_ft[10] = "Hello Toi";
	char * dest_ft = (char *) malloc(8);
	strcpy(dest_ft, "Coucou");
	printf("strncat = %s, ft_strncat = %s",strncat (dest, src, 3), 
	ft_strncat(dest_ft, src_ft, 3));
}
*/
