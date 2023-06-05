/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:55:28 by javirodr          #+#    #+#             */
/*   Updated: 2022/02/23 17:11:24 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 'A' && str[a] <= 'Z'))
			if (!(str[a] >= 'a' && str[a] <= 'z'))
				return (0);
		if (!(str[a] >= 'a' && str[a] <= 'z'))
			if (!(str[a] >= 'A' && str[a] <= 'Z'))
				return (0);
		a++;
	}
	return (1);
}
