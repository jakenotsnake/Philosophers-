/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:47:49 by jtanner           #+#    #+#             */
/*   Updated: 2022/09/19 19:43:43 by jtanner          ###   ########.fr       */
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
		i[0] += 1;
		while (i[0]-- >= 2)
			initdudes(i[0], i[1], i[2], i[3], i[4]);
	}
	return(0);
	exit(0);
}

void	*startdudes(t_dudes *p)
{
	gettimeofday(&p->time, NULL);
	printf("%d: %d Has awoken\n", p->time.tv_usec, p->no);
	return(0);
}
