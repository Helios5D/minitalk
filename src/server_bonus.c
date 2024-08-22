/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:09:29 by hdaher            #+#    #+#             */
/*   Updated: 2024/07/04 16:51:56 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	receive(int signal, siginfo_t *sa, void *context)
{
	static int	bit = 0;
	static int	c = 0;

	(void)context;
	if (signal == SIGUSR2)
		c |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", c);
		c = 0;
		bit = 0;
	}
	kill(sa->si_pid, SIGUSR1);
}

int	main(void)
{
	int					pid;
	struct sigaction	sa;

	pid = getpid();
	ft_printf("Server PID : \x1b[32m%d\x1b[0m\n", pid);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = &receive;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
	}
}
