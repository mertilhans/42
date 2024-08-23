/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:15:07 by merilhan          #+#    #+#             */
/*   Updated: 2024/08/23 19:20:02 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
 void ft_putnbr(int nb)
 {
    unsigned int n;
    if (nb < 0)
    {
        ft_putchar('-');
        n = -nb;
    }
    else 
        n = nb;
    if (n > 9)
    {
        ft_putnbr(n / 10);
        n %=10;
    }
    ft_putchar(n + '0');
 }
