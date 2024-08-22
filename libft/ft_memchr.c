/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:48:46 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:33:30 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				i;

	ch = (unsigned char)c;
	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char c = 'm';
	char *str = "bonjour mon monsieur";
	printf("%s\n", (char*)ft_memchr(str, c, 15));
}*/
