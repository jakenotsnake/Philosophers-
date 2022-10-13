/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <jtanner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:47:49 by jtanner           #+#    #+#             */
/*   Updated: 2022/10/13 15:55:04 by jtanner          ###   ########.fr       */
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

void	*startdudes(void	*args)
{printf("here\n");
	t_dudes	*p;

	p = (t_dudes *)args;
	gettimeofday(&p->init, NULL);
	p->le.tv_usec = p->init.tv_usec;
	
	printf("%d: dude %d Has awoken\n", p->init.tv_usec, p->no);
	//sleep(10);
	if (p->no % 2 == 0)
		tryeat(p);
	else
		dudesleep(p);
	return (0);
}
