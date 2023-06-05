/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournou <efournou@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:24:32 by efournou          #+#    #+#             */
/*   Updated: 2022/02/22 18:41:03 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i) != 0)
		i++;
	while (src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j] != '\0')
	{	
		j++;
		i++;
	}
	return (i);
}

int	main()
{
	unsigned long int res;
	char src[10] = "ABCD";
	src[9] = '\0';
	
	char * dest = (char *) malloc(8);
	strcpy(dest, "1234AB");
	res = strlcat (dest, src, 6);
	char src_ft[10] = "ABCD";
	char * dest_ft = (char *) malloc(20);
	strcpy(dest_ft, "1234AB");
	int res_ft = ft_strlcat(dest_ft, src_ft, 6);
	printf("strlcat = %s, strlcat return : %lu  ft_strlcat = %s, ft_return = %u",
   	dest, res, dest_ft, res_ft);
}

