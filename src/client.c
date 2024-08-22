/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:09:33 by hdaher            #+#    #+#             */
/*   Updated: 2024/07/05 13:35:14 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_server_response = 0;

void	server_response(int signal)
{
	(void)signal;
	g_server_response = 1;
}

int	send(char c, int pid)
{
	int		bit;
	int		i;

	signal(SIGUSR1, &server_response);
	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		bit++;
		i = 0;
		while (g_server_response == 0)
		{
			usleep(50);
			i++;
			if (i >= 1000)
				return (0);
		}
		g_server_response = 0;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	if (ac != 3)
		return (ft_putstr_fd(ARG_ERR, 2), 1);
	pid = ft_atoi(av[1]);
	if (pid <= 0)
		return (ft_putstr_fd(PID_ERR, 2), 1);
	while (av[2][i])
	{
		if (!send(av[2][i], pid))
			return (ft_putstr_fd(SERV_ERR, 2), 1);
		i++;
	}
	ft_printf("\x1b[32m%d\x1b[0m bytes sent.\n", ft_strlen(av[2]));
	return (0);
}
