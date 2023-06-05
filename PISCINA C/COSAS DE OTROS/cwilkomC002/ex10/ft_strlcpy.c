/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwikholm <cwikholm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:15:50 by cwikholm          #+#    #+#             */
/*   Updated: 2022/02/28 17:53:52 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;

	count = 0;
	if (dest[size] > 0)
	{
		while (src[count] != '\0')
		{
			if (count == dest[size])
			{
				return (0);
			}
			dest[count] = src[count];
			count++;
		}
	}
	dest[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
#include <stdio.h>
int main(void)
{
	char source[] = "Hello World!";
	char destination[] = "Short";
	unsigned int size;

	size = 3;
	ft_strlcpy(destination, source, size);
	printf("Copied from '%s' into '%s', length %d\n", source, destination, size);
	return (0);
}
