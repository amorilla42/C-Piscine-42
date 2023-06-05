/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:10:29 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/16 13:16:58 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int a;
    int b;
    int *c;
    int *d;

    a = 10;
    b = 5;

    ft_div_mod(a, b, c ,d);
    printf("%d y %d", *c, *d);
}
*/
