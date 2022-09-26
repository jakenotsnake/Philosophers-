/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:47:49 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/23 20:41:33 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/philo.h"

int	main(int ac, char **av)
{
	int i[5];
	int	c;

	if (ac == 6)
	{
		c = -1;
		while (c++ < 4)
			i[c] = atoi(av[c + 1]);
		startthread(i);
	}
	return(0);
	exit(0);
}

void	startdudes(t_dudes *p)
{
	gettimeofday(&p->time, NULL);
	printf("%d: %d Has awoken\n", p->time.tv_usec, p->no);
	usleep(300000);
	printf("hello I am no.%d\n", p->no);
	if (p->no % 2 == 0)
		tryeat(p);
	else
		
	tryeat(p);
	pthread_exit(NULL);
}
