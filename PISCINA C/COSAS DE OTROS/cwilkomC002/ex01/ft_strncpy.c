/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwikholm <cwikholm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:29:51 by cwikholm          #+#    #+#             */
/*   Updated: 2022/02/28 17:38:46 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy( char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
	dest[count] = '\0';
	count++;
	}
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char source[] = "Copy again";
	char destination[] = "Longer string";
	unsigned int n;

	n = 20;
	ft_strncpy(destination, source, n);
	printf("%s", destination);
	return (0);
}
