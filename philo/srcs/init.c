/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <jtanner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:46:48 by jtanner           #+#    #+#             */
/*   Updated: 2022/10/13 15:56:57 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"
# include <string.h>


t_dudes	*initdudes(t_dudes **p, int *i, int l, pthread_mutex_t **k)
{
	p[l] = (t_dudes *)malloc(sizeof(t_dudes));
	p[l]->no = l;
	p[l]->hunger = i[1];
	p[l]->time_eat = i[2];
	p[l]->time_sleep = i[3];
	p[l]->eaten = i[4];
	p[l]->keys = *k;
	return (p[l]);
}

void	startthread(int *i)
{
	pthread_t	t[i[0]];
	int	l;
	t_dudes *p[i[0]];
	pthread_mutex_t k[i[0]];

	l = 1;
	while (l <= i[0])
	{
		p[l] = initdudes(p, i, l, &k);
		pthread_mutex_init(&k[l], NULL);
		l++;
	}
	l--;
	while (l > 0)
	{	
		pthread_create(&t[l], NULL, startdudes, p[l]);
		l--;
	}
	l = i[0];
	while (l > 0)
	{
		pthread_join(t[l], NULL);
		l--;
	}
}
