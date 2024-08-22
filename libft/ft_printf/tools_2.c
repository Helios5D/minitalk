/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 09:49:02 by hdaher            #+#    #+#             */
/*   Updated: 2024/07/04 11:33:31 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_printchar(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	ft_printstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_printstr("(null)", count);
		return ;
	}
	while (str[i])
		i++;
	write(1, str, i);
	*count += i;
}
