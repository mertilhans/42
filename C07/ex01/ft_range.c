/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:17:56 by merilhan          #+#    #+#             */
/*   Updated: 2024/09/01 16:02:28 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *t;
	int i;

	if (min >= max)
		return (NULL);
	max -= min;
	t = malloc(max * sizeof(int));
	if (!t)
		return (NULL);
	i = 0;
	while (i++ < max)
		t[i] = min + i;
	return (t);
}
