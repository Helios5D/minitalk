/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:22:04 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:43:32 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	dest_size = 0;
	src_size = 0;
	while (dst[dest_size])
		dest_size++;
	while (src[src_size])
		src_size++;
	if (siz == 0)
		return (src_size);
	i = 0;
	while (src[i] != '\0' && (i < siz - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
