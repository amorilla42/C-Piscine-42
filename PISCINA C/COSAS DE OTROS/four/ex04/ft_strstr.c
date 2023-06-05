/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournou <efournou@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:22:49 by efournou          #+#    #+#             */
/*   Updated: 2022/02/22 18:36:47 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0' && to_find[j] == str[i])
			{
				j++;
				i++;
				if (to_find[j] == '\0')
					return (&str[i - j]);
			}
			j = 0;
			i--;
		}
		i++;
	}
	return (NULL);
}

int main()
{
    char *ret;
	char *ft_ret;
	char tmp[2] = "yz";
	ret = strstr(tmp, "z");
	ft_ret = ft_strstr(tmp, "z");
	if (ret)
        printf("strstr result :  %p\n", ret);
    else
        printf("strstr result : no substring found!\n");
	if (ft_ret)
        printf("ft_strstr result :  %p\n", ft_ret);
    else
        printf("ft_strstr result : \n");
	
}
