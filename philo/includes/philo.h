/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <jtanner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:17:45 by jtanner           #+#    #+#             */
/*   Updated: 2022/10/13 15:56:21 by jtanner          ###   ########.fr       */
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
	long int		hunger;
	long int		time_eat;
	long int		time_sleep;
	long int		eaten;
	struct timeval	init;
	struct timeval	le;
	struct timeval	sa;
	struct timeval	ea;
	int				fork;
	pthread_mutex_t	*keys;
}				t_dudes;


int	main(int ac, char **av);
void*	startdudes(void *args);
t_dudes	*initdudes(t_dudes **p, int *i, int l, pthread_mutex_t *k);
void	startthread(int *i);
void	tryeat(t_dudes *p);
void	dudesleep(t_dudes *p);
#endif
