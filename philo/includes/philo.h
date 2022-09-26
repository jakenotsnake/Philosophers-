/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:17:45 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/23 20:41:34 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>
# define INT_MAX	2147483647
# define INT_MIN	-2147483648

typedef	struct	s_dudes
{
	pthread_t		id;
	int				no;
	int				hunger;
	int				time_eat;
	int				time_sleep;
	int				eaten;
	struct timeval	time;
}				t_dudes;

int	main(int ac, char **av);
void	startdudes(t_dudes *p);
void	*initdudes(int *arg);
void	startthread(int *i);
void	*initdudesb(void *args);

#endif
