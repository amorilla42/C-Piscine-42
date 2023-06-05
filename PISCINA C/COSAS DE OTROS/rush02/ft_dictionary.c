/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:44:19 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/26 21:37:19 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

struct word{
	char *key;
	char *value;
};

int	ft_countlines(char *fname)
{
	int 	fid;
	char	a;
	int		numbytes;
	int		numlines;

	numlines = 0;
	fid = open(fname, O_RDONLY);
	numbytes = read(fid, &a, sizeof(char));
	while (numbytes > 0)
	{
		if (a == ':')
			numlines++;
		numbytes = read(fid, &a, sizeof(char));
	}
	close(fid);
	return (numlines);
}

word	*ft_init_dict(char *fname)
{
	return (malloc(sizeof(struct word)*ft_countlines(fname)));
}

void	ft_split(char *a, char *key, char *value, int size)
{
	int i;
	int j;


	i = 0;
	while(i < size)
	{
		while(a[i]>='0' && a[i]<='9')
		{
			
		}
	}
}


word	*ft_fill_dict(word *dict, char *fname, char *a)
{
	int 	fid;
	int		numbytes;
	int		i;
	char	*key;
	char	*value;

	i = 0;
	fid = open(fname, O_RDONLY);
	numbytes = read(fid, a[i], sizeof(char));
	while (numbytes > 0)
	{
		while(a[i] != '\n' && numbytes > 0)
		{
			numbytes = read(fid, a[i], sizeof(char));
			i++;
		}
		i--;
		ft_split(a, key, value, i);
		i = 0;
	}
	close(fid);
	return (numlines);
}



word *a = ft_init_dict("numbers.dict");
a = ft_fill_dict(a,"numbers.dict");



