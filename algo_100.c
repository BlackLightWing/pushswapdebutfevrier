/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:53:43 by msorbell          #+#    #+#             */
/*   Updated: 2023/01/27 11:36:46 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_100(a stack_a, b stack_b)
{
	int	i;

	i = 0;
	while (i < 5)
		put_the_2_min_on_b(stack_a, stack_b);
	i = 0;
	while (i < 100)
		pa(stack_a, stack_b);
}
