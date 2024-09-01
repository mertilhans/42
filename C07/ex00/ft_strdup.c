/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:22:42 by merilhan          #+#    #+#             */
/*   Updated: 2024/09/01 15:45:36 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdlib.h>

int     ft_strlen(char *str)
{
    int n;
    n = 0;
    while(str[n])
        n++;
    return(n);
}

char    *ft_strcpy(char *dest,char *src)
{
    int i;
    i = -1;
    while(src[++i])
        dest[i] = src[i];
    dest[i] = '\0';
    return(dest);
}
char    *ft_strdup(char *src)
{
    char *dest;
    dest = malloc((ft_strlen(src)+ 1) * sizeof(char));
    if (!dest)
        return(NULL);
    return(ft_strcpy(dest,src));
}