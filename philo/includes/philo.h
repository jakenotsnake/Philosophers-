/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:17:45 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/19 16:02:51 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# define INT_MAX	2147483647
# define INT_MIN	-2147483648

typedef	struct	t_dudes
{
	pthread_t	id;
	int	no;
	int	hunger;
	int	time_eat;
	int	time_sleep;
	int	eaten;
}				s_dudes;



#endif
