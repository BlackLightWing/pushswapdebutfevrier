/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:53:20 by msorbell          #+#    #+#             */
/*   Updated: 2023/01/27 14:24:19 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_the_2_min_on_b(a stack_a, b stack_b)
{
	int	min;
	int	pos;
	int	i;
	int	count;

	i = 1;
	while (i <= 2)
	{
		min = min_tab(stack_a.tab, stack_a.len);
		pos = pos_mini(stack_a.tab, min);
		count = 1;
		printf("pos_mini = %d\n", pos);
		if (pos < (stack_a.len + 1 / 2))
		{
			while (count <= pos)
			{
				ra(stack_a, 0);
				count++;
			}
		}
		else
		{
			while (count <= (stack_a.len - pos))
			{
				rra(stack_a, 0);
				count++;
			}
		}
		pb(stack_a, stack_b);
		i++;
	}
}

void	algo_5(a stack_a, b stack_b)
{
	if (stack_a.tab[0] < stack_a.tab[1] && stack_a.tab[1] < stack_a.tab[2]
		&& stack_a.tab[2] < stack_a.tab[3] && stack_a.tab[3] < stack_a.tab[4])
		return ;
	else
	{
		stack_b.len += 2;
		put_the_2_min_on_b(stack_a, stack_b);
		stack_a.len -= 2;/*
		printf("%d\n", stack_a.len);
		printf("%d\n", stack_b.len);
		 for(int i = 0;stack_a.tab[i];i++)
		{
			printf("tab[%d] = %d\n",i, stack_a.tab[i]);
			//printf("taille du tableau : %d\n", i);
		}*/
		algo_3(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
