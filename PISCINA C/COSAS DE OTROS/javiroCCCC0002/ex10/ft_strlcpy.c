/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:26:57 by javirodr          #+#    #+#             */
/*   Updated: 2022/02/28 18:53:00 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	if (size == 0)
		return (a);
	while (src[a] != '\0' && a < size)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (a);
}
