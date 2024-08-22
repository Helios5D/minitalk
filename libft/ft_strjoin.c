/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:02:48 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/16 12:11:03 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	size_t	i;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	str = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - s1_size])
	{
		str[s1_size + i - s1_size] = s2[i - s1_size];
		i++;
	}
	str[s1_size + i - s1_size] = '\0';
	return (str);
}
