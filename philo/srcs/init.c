/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:46:48 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/20 17:30:05 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	initdudes(int np, int d, int e, int s, int o)
{
	t_dudes	*p;

	p = (t_dudes *)malloc(sizeof (t_dudes));
	p->id = pthread_self();
	p->no = np;
	p->hunger = d;
	p->time_eat = e;
	p->time_sleep = s;
	p->eaten = o;
	printf("no:%d, hunger:%d, eat:%d, sleep:%d, eaten:%d\n", p->no, p->hunger, p->time_eat, p->time_sleep, p->eaten);
	startdudes(p);
}

void	startthread(int n, int d, int e, int s, int o)
{
	pthread_t	t[n];
	
	while (n-- >=2)
		pthread_create(&t[n], NULL, &initdudes(n, d, e, s, o), NULL);
}
