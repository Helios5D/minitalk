/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:31:28 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:36:30 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	if (dest2 < src2)
	{
		i = 0;
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		dest2[i - 1] = src2[i - 1];
		i--;
	}
	return (dest);
}
