/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:46:48 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/23 20:41:34 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	*initdudesb(void *arg)
{
	int	*args;

	args = (int *)arg;
	initdudes(args);
	return (NULL);
}

void	*initdudes(int *args)
{
	t_dudes	*p[args[0]];
	int c;

	c = args[0];
	p[c] = (t_dudes *)malloc(sizeof(t_dudes));
	p[c]->id = pthread_self();
	p[c]->no = args[0];
	p[c]->hunger = args[1];
	p[c]->time_eat = args[2];
	p[c]->time_sleep = args[3];
	p[c]->eaten = args[4];
	startdudes(p[args[0]]);
	return (NULL);
}

void	startthread(int *i)
{
	pthread_t	t[i[0]];
	int c;
	int j[i[0]][5];
	int	l;
	
	c = i[0];
	l = 1;
	while (l <= i[0])
	{
		j[l][0] = l;
		j[l][1] = i[1];
		j[l][2] = i[2];
		j[l][3] = i[3];
		j[l][4] = i[4];
		usleep(1000);
		pthread_create(&t[l], NULL, initdudesb, j[l]);
		l++;
	}
	l = 0;
	while (l <= i[0])
	{
		pthread_join(t[l], NULL);
		l++;
	}
}
