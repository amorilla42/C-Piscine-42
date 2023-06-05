/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:30:22 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 13:33:29 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(){

	char a[]="holia";
	char b[]="usted1";
	char c[]="usted2";
	
	printf("%s\n",ft_strncpy(b,a,3));
	printf("%s\n",ft_strncpy(c,a,3));
	printf("%s\n",ft_strncpy(b,a,5));
	printf("%s\n",ft_strncpy(c,a,5));
	printf("%s\n",ft_strncpy(b,a,7));
	printf("%s\n",ft_strncpy(c,a,7));
	
	return 0;
}
*/
