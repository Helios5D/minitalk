/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:37:41 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/22 11:51:07 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_big;
	char	*new_little;

	if ((big == NULL && len == 0) || (little == NULL && len == 0))
		return (0);
	new_big = (char *)big;
	new_little = (char *)little;
	if (!new_little[0])
		return (new_big);
	i = 0;
	while (new_big[i] != '\0' && i < len)
	{
		j = 0;
		while (new_big[i + j] == new_little[j] && i + j < len)
		{
			if (new_little[j + 1] == '\0')
				return (new_big + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Bonjour monsieur";
	char	str2[] = "mon";

	printf("%s\n", ft_strnstr(str, str2, 11));
}*/
