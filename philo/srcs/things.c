/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   things.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <jtanner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:46:48 by jtanner           #+#    #+#             */
/*   Updated: 2022/10/13 15:53:08 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/philo.h"

void tryeat(t_dudes *p)
{
    gettimeofday(&p->sa, NULL);
    printf("%d:%d is eating\n", p->sa.tv_usec, p->no);
    gettimeofday(&p->ea, NULL);
    pthread_mutex_lock(p->keys[p->no]);
    printf("%d:%d has picked up fork 1\n", p->sa.tv_usec, p->no);
    pthread_mutex_lock(p->keys[p->no - 1]);
    printf("%d:%d has picked up fork \n", p->sa.tv_usec, p->no);
    while (((p->ea.tv_usec) - (p->sa.tv_usec)) < (p->time_eat))
    {
        gettimeofday(&p->ea, NULL);
        if ((gettimeofday(&p->ea, NULL) - (p->le.tv_usec) >= p->hunger))
            {
                printf("%d:%d is dead\n" ,gettimeofday(&p->sa, NULL), p->no);
                exit(1);
            }
    }
    printf("%d:%d is full\n",gettimeofday(&p->sa, NULL), p->no);
    tryeat(p);
pthread_exit(NULL);
}

void	dudesleep(t_dudes *p)
{
    printf("%d:%d is sleeping\n",gettimeofday(&p->sa, NULL), p->no);
    gettimeofday(&p->ea, NULL);
    while (((p->ea.tv_usec) - (p->sa.tv_usec)) < (p->time_sleep))
    {
        gettimeofday(&p->ea, NULL);
      //  printf("time elpsed:%d\n", ((p->ea.tv_usec) - (p->sa.tv_usec)));
        if ((p->ea.tv_usec) - (p->le.tv_usec) >= p->hunger)
            {
                printf("%d:%d is dead\n", p->ea.tv_usec, p->no);
                exit(1);
            }
    }
    printf("%d:%d is awake\n",gettimeofday(&p->sa, NULL), p->no);
	tryeat(p);
    pthread_exit(NULL);

}
    

   

