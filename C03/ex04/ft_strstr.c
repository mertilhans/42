/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:17:48 by merozcan          #+#    #+#             */
/*   Updated: 2024/08/25 13:03:25 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s && *f && *s == *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (str);
		str++;
	}
	return (0);
}
