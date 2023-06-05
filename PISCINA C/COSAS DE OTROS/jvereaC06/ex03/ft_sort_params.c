/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverea-a <jverea-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:03:57 by jverea-a          #+#    #+#             */
/*   Updated: 2022/03/02 10:11:44 by jverea-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	j;
	int	dif;

	j = 0;
	dif = 0;
	while (dif == 0)
	{
		dif = s1[j] - s2[j];
		if (dif != 0)
		{
			break ;
		}
		if ((s1[j] == '\0') && (s2[j] == '\0'))
		{
			break ;
		}	
		j++;
	}
	return (dif);
}	

void	ft_sort(int argc, char *argv[], int i, int p)
{
	int		cont;
	char	*min;

	while (i < argc)
	{
		p = -1;
		min = argv[i];
		cont = i + 1;
		while (cont < argc)
		{
			if (ft_strcmp(min, argv[cont]) > 0)
			{
				min = argv[cont];
				p = cont;
			}
			cont ++;
		}	
		if (p != 1)
		{
			argv[p] = argv[i];
			argv[i] = min;
		}	
		i++;
	}	
}	

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	r;

	i = 1;
	r = -1;
	ft_sort(argc, argv, i, r);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	(void) argc;
	(void) argv;
	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}	
		write(1, "\n", 1);
		i++;
	}
}	
