/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:46:48 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/19 16:02:54 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	initdudes(int n, int d, int e, int s, int o)
{
	t_dudes	*d;
	
	d->no = n;
	d->hunger = d;
	d->time_eat = e;
	d->time_sleep = s;
	d->eaten = o;
	pthread_create(d->id, NULL, startdude, d);
