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

void	*initdudes(void *arg)
{
	t_dudes	*p;
	int	*args;

	args = (int *)arg;
	printf("0:%d, 1:%d, 2:%d\n", args[0], args[1], args[2]);
	p = (t_dudes *)malloc(sizeof (t_dudes));
	p->id = pthread_self();
	p->no = args[0];
	p->hunger = args[1];
	p->time_eat = args[2];
	p->time_sleep = args[3];
	p->eaten = args[4];
	printf("no:%d, hunger:%d, eat:%d, sleep:%d, eaten:%d\n", p->no, p->hunger, p->time_eat, p->time_sleep, p->eaten);
	startdudes(p);
	return (0);
}

void	startthread(int *i)
{
	pthread_t	t[i[0]];
	int c;
	
	c = i[0];
	while (i[0]-- >=2)
	{
		printf("%d\n", i[0]);
		pthread_create(&t[i[0]], NULL, initdudes, (void *)i);
	}
	while (c-- >=2)
		pthread_join(t[c], NULL);
}
