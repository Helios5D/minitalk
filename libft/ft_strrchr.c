/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:27:42 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:48:21 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				size;
	char			*str;
	unsigned char	ch;

	ch = (unsigned char)c;
	str = (char *)s;
	size = 0;
	i = 0;
	while (str[size])
		size++;
	while (i < size && str[size - i] != ch)
		i++;
	if (str[size - i] == ch)
		return (str + size - i);
	return (NULL);
}

/*int	main(void)
{
	char c = 'm';
	char *str = "bonjour mon monsieur";
	printf("%s\n", ft_strrchr(str, c));
}*/
