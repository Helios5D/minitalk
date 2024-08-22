/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:28:56 by hdaher            #+#    #+#             */
/*   Updated: 2024/07/04 16:29:56 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

// Macros

# define ARG_ERR "Error\nWrong arguments format.\n"
# define SERV_ERR "Error\nServer not responding. Make sure the PID is valid.\n"
# define PID_ERR "Error\nInvalid PID. \n"

// Includes

# include <unistd.h>
# include <signal.h>
# include "../libft/libft.h"

#endif
