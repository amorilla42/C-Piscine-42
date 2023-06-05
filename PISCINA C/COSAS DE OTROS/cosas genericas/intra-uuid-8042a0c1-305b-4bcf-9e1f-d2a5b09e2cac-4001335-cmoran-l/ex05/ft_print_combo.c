/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoran-l <cmoran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:05:53 by cmoran-l          #+#    #+#             */
/*   Updated: 2022/02/14 18:34:35 by cmoran-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_screen(char a, char b, char c);
void	ft_comb(char a, char b, char c);
void	ft_lastcomb(char a, char b, char c);

void	ft_print_comb(void)
{
	char	fst;
	char	snd;
	char	tth;

	fst = '0';
	snd = '1';
	tth = '2';
	while (fst <= '9')
	{
		while (snd <= '9')
		{
			while (tth <= '9')
			{
				if (fst == '7' && snd == '8' && tth == '9')
					ft_lastcomb(fst, snd, tth);
				else if (fst < snd && snd < tth)
					ft_screen(fst, snd, tth);
				tth++;
			}
			tth = snd + 1;
			snd++;
		}
		snd = fst + 1;
		fst++;
	}
}

void	ft_screen(char a, char b, char c)
{
	ft_comb(a, b, c);
	write(1, ", ", 2);
}

void	ft_comb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_lastcomb(char a, char b, char c)
{
	ft_comb(a, b, c);
}
