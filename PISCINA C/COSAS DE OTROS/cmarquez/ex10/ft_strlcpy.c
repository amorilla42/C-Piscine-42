/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarquez <cmarquez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:18:29 by cmarquez          #+#    #+#             */
/*   Updated: 2022/02/20 11:46:37 by cmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size < 1)
		return (src_len);
	i = 0;
	while (src && i < size -1)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (src_len);
}
