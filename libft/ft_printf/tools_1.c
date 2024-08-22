/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 07:57:45 by hdaher            #+#    #+#             */
/*   Updated: 2024/07/04 11:33:32 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_printnbr_hex(unsigned int nbr, int is_upper, int *count)
{
	unsigned int	digits;

	digits = 16;
	if (is_upper)
	{
		if (nbr >= digits)
			ft_printnbr_hex((nbr / digits), is_upper, count);
		ft_printchar("0123456789ABCDEF"[nbr % digits], count);
	}
	else
	{
		if (nbr >= digits)
			ft_printnbr_hex((nbr / digits), is_upper, count);
		ft_printchar("0123456789abcdef"[nbr % digits], count);
	}
}

void	ft_printnbr(int n, int *count)
{
	if (n == -2147483648)
		ft_printstr("-2147483648", count);
	else
	{
		if (n < 0)
		{
			ft_printchar(45, count);
			n = -n;
		}
		if (n >= 10)
			ft_printnbr(n / 10, count);
		ft_printchar(48 + n % 10, count);
	}
}

void	ft_printunsignednbr(unsigned int n, int *count)
{
	if (n >= 10)
		ft_printunsignednbr(n / 10, count);
	ft_printchar(48 + n % 10, count);
}

void	ft_printptr_rec(unsigned long nbr, char *base, int *count)
{
	unsigned long	digits;

	digits = 16;
	if (nbr >= digits)
		ft_printptr_rec((nbr / digits), base, count);
	ft_printchar(base[nbr % digits], count);
}

void	ft_printptr(unsigned long ptr, int *count)
{
	if (ptr == 0)
		ft_printstr("(nil)", count);
	else
	{
		ft_printstr("0x", count);
		ft_printptr_rec(ptr, "0123456789abcdef", count);
	}
}
