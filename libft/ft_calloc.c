/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:17:55 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/15 15:06:58 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*array;

	i = 0;
	total = nmemb * size;
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	array = malloc(total);
	if (array == NULL)
		return (NULL);
	while (i < total)
	{
		array[i] = '\0';
		i++;
	}
	return ((void *)array);
}
