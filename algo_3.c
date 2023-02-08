/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:52:45 by msorbell          #+#    #+#             */
/*   Updated: 2023/01/27 14:25:32 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_3(a stack_a)
{
	for(int i = 0;stack_a.tab[i];i++)
	{
		printf("tab[%d] = %d\n",i, stack_a.tab[i]);
		//printf("taille du tableau : %d\n", i);
	}
	if (stack_a.tab[0] < stack_a.tab[1]
		&& stack_a.tab[1] < stack_a.tab[2])
		return ;
	else if (stack_a.tab[0] < stack_a.tab[1]
		&& stack_a.tab[1] > stack_a.tab[2] && stack_a.tab[0] < stack_a.tab[2])
	{
		ra(stack_a, 0);
		sa(stack_a.tab, 0);
		rra(stack_a, 0);
	}
	else if (stack_a.tab[0] < stack_a.tab[1]
		&& stack_a.tab[1] > stack_a.tab[2] && stack_a.tab[0] > stack_a.tab[2])
		rra(stack_a, 0);
	else if (stack_a.tab[0] > stack_a.tab[1]
		&& stack_a.tab[0] < stack_a.tab[2])
	{
		if (stack_a.tab[1] < stack_a.tab[2])
			sa(stack_a.tab, 0);
		else
			rra(stack_a, 0);
	}
	else
	{
		if (stack_a.tab[1] < stack_a.tab[2])
			ra(stack_a, 0);
		else
		{
			sa(stack_a.tab, 0);
			rra(stack_a, 0);
		}
	}
}
