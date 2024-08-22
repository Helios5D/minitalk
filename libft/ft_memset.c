/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:34 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:37:15 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr2;

	ptr2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
