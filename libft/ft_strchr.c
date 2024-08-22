/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:48:33 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:38:54 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	ch;

	str = (char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (str[i] && str[i] != ch)
		i++;
	if (str[i] == ch)
		return (str + i);
	return (NULL);
}

/*int	main(void)
{
	char c = 'm';
	char *str = "bonjour mon monsieur";
	printf("%s\n", ft_strchr(str, c));
}*/
