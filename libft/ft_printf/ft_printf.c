/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:57:25 by hdaher            #+#    #+#             */
/*   Updated: 2024/07/04 11:33:33 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	put_arg(char format, va_list args, int *count)
{
	if (format == 'c')
		return (ft_printchar(va_arg(args, int), count), 1);
	else if (format == 'd' || format == 'i')
		return (ft_printnbr(va_arg(args, int), count), 1);
	else if (format == 'u')
		return (ft_printunsignednbr(va_arg(args, unsigned int), count), 1);
	else if (format == 's')
		return (ft_printstr(va_arg(args, char *), count), 1);
	else if (format == 'p')
		return (ft_printptr(va_arg(args, unsigned long), count), 1);
	else if (format == 'x')
		return (ft_printnbr_hex(va_arg(args, unsigned int), 0, count), 1);
	else if (format == 'X')
		return (ft_printnbr_hex(va_arg(args, unsigned int), 1, count), 1);
	else if (format == '%')
		return (ft_printchar('%', count), 1);
	else
		return (ft_printchar('%', count), -1);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	int				i;
	int				count;

	if (!str)
		return (-1);
	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			if (put_arg(str[i + 1], args, &count) == -1)
				i--;
			i++;
		}
		else if (str[i] == '%' && !str[i + 1])
			return (va_end(args), -1);
		else
			ft_printchar(str[i], &count);
		i++;
	}
	return (va_end(args), count);
}

// int main(void)
// {
// 	ft_printf("\x1B[0;31mHello");
// }
