/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:34:11 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/28 15:18:10 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strlonga(char *frase)
{
	int	i;

	i = 0;
	while (frase[i] != '\0')
		i++;
	return (i);
}

int	charnorepetido(char *frase)
{
	int	i;
	int	j;
	int	norepe;

	norepe = 1;
	i = 0;
	while (frase[i] != '\0' && norepe == 1)
	{
		j = i + 1;
		while (frase[j] != '\0' && norepe == 1)
		{
			if (frase[i] == frase[j])
				norepe = 0;
			j++;
		}
		i++;
	}
	return (norepe);
}

int	nohaysignos(char *txt)
{
	int	nosig;
	int	i;

	i = 0;
	nosig = 1;
	while (nosig == 1 && txt[i] != '\0')
	{
		if (txt[i] == '+' || txt[i] == '-')
			nosig = 0;
		i++;
	}
	return (nosig);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = strlonga(base);
	if ((len > 1) && charnorepetido(base) && nohaysignos(base))
	{	
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(-nbr, base);
		}
		else if (nbr > len - 1)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
		else
		{
			write(1, base + nbr, 1);
		}
	}
}

int main(){

	ft_putnbr_base(-2147483648,"poneyvif");
	return 0;
}
