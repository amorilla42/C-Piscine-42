/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournou <efournou@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:24:32 by efournou          #+#    #+#             */
/*   Updated: 2022/02/22 13:35:29 by efournou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(dest + i) != 0)
		i++;
	while (src[j] != '\0')
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
	char * dest = (char *) malloc(20);
	strcpy(dest, "Coucou");
	char src_ft[10] = "Hello Toi";
	char * dest_ft = (char *) malloc(20);
	strcpy(dest_ft, "Coucou");
	printf("strcat = %s, ft_strcat = %s",strcat (dest, src), 
	ft_strcat(dest_ft, src_ft));
}
*/
