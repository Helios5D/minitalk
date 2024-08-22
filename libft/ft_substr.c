/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 08:53:13 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/16 11:54:49 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

static size_t	get_l(char const *s, size_t s_l, size_t l, unsigned int start)
{
	size_t	sub_len;

	sub_len = 0;
	while (s[s_l])
		s_l++;
	if (start > s_l)
		sub_len = 0;
	else
		sub_len = get_min(l, s_l - start);
	return (sub_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	sub_len;
	size_t	i;
	char	*sub_str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str_len = 0;
	sub_len = get_l(s, str_len, len, start);
	sub_str = malloc((sub_len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	while (i < sub_len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

/*#include <stdio.h>
int	main(void)
{
	printf("llo : %s\n", ft_substr("Hello", 2, 5));
	printf("ota : %s\n", ft_substr("Potato", 1, 3));
	printf("yes : %s\n", ft_substr("yes", 0, 500));
}*/
