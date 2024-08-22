/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:20:08 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:41:54 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	dest_size = 0;
	src_size = 0;
	if ((dst == NULL && siz == 0) || (src == NULL && siz == 0))
		return (0);
	while (dst[dest_size] && dest_size < siz)
		dest_size++;
	while (src[src_size])
		src_size++;
	if (siz <= dest_size)
		return (src_size + siz);
	i = 0;
	while (src[i] != '\0' && dest_size + i < siz - 1)
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (src_size + dest_size);
}
