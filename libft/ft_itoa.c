/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:58:38 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/16 11:17:34 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(long nb)
{
	int	total;

	total = 1;
	if (nb < 0)
	{
		nb = -nb;
		total++;
	}
	while (nb > 9)
	{
		nb /= 10;
		total++;
	}
	return (total);
}

static char	*create_str(long nb, int sign, int size)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (sign == 1)
		str[0] = '-';
	while (size - i > sign)
	{
		str[size - 1 - i++] = nb % 10 + '0';
		nb /= 10;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		size;
	long	nb;

	nb = (long)n;
	sign = 0;
	size = get_num_len(nb);
	if (nb < 0)
	{
		nb = -nb;
		sign = 1;
	}
	return (create_str(nb, sign, size));
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0007));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-9));
}*/
