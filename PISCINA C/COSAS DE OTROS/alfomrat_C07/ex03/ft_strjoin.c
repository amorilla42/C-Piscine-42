/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:39:49 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/28 15:13:58 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*head;

	head = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (head);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += ft_strlen(sep);
		i++;
	}
	ptr = malloc (sizeof(**strs) * len);
	if (!ptr)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size -1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

#include<stdio.h>
int	main(void)
{
	char sep[] = "_";
	char *day[7] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"};
	printf("%s", ft_strjoin(0, day, sep));
	free(ft_strjoin(0, day, sep));

}

