/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:46:48 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/19 19:42:50 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	initdudes(int n, int d, int e, int s, int o)
{
	t_dudes	*p;

	p = (t_dudes *)malloc(sizeof (t_dudes));
	p->no = n;
	p->hunger = d;
	p->time_eat = e;
	p->time_sleep = s;
	p->eaten = o;
	pthread_create(&p->id, NULL, startdudes(p), NULL);
}
