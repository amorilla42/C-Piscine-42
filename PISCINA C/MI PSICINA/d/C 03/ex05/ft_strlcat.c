/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:45:02 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/22 17:29:16 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

unsigned int	f_size(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_size;
	unsigned int	sr_size;
	unsigned int	i;
	unsigned int	x;

	i = 0;
	d_size = f_size(dest);
	x = d_size;
	sr_size = f_size(src);
	if (size == 0 || d_size >= size)
		return (size + sr_size);
	while (src[i] && i < size - 1)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	if (size <= d_size)
		return (sr_size + size);
	else
		return (sr_size + d_size);
}
/*
int main(void)
{
	char a[] = "hola";
	char b[] = "mundo";
	unsigned int x = ft_strlcat(a, b, 2);
	printf("%s %d", a, x);
}*/
