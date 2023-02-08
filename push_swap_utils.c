/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:02:06 by msorbell          #+#    #+#             */
/*   Updated: 2023/01/27 14:07:01 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_tab(int	*tab, int len)
{
	int	min;
	int	i;

	i = 0;
	min = tab[0];
	while (i < len)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	sa(int *tab, int oke)
{
	int	i;

	i = 0;
	i = tab[0];
	tab[0] = tab[1];
	tab[1] = i;
	if (oke != 1)
		ft_putstr("sa\n");
}

void	sb(int *tab, int oke)
{
	int	i;

	i = 0;
	i = tab[0];
	tab[0] = tab[1];
	tab[1] = i;
	if (oke != 1)
		ft_putstr("sb\n");
}

void	ss(int *tab, int *tab_b)
{
	int	oke;

	oke = 1;
	sa(tab, oke);
	sb(tab_b, oke);
	ft_putstr("ss\n");
}

void	pa(a stack_a, b stack_b)
{
	int	i;

	update_tab(stack_a.tab, stack_a.len + 1);
	stack_a.len++;
	i = stack_a.len;
	if (!stack_b.tab)
		return ;
	while (i <= 0)
	{
		stack_a.tab[i] = stack_a.tab[i - 1];
		i--;
	}
	stack_a.tab[0] = stack_b.tab[0];
	i = 0;
	while (i <= stack_b.len - 2)
	{
		stack_b.tab[i] = stack_b.tab[i + 1];
		i++;
	}
	ft_putstr("pa\n");
	update_tab(stack_b.tab, stack_b.len - 1);
	stack_b.len--;
}

void	pb(a stack_a, b stack_b)
{
	int	i;

	update_tab(stack_b.tab, stack_b.len + 1);
	stack_b.len++;
	i = stack_b.len;
	if (!stack_a.tab)
		return ;
	while (i <= 0)
	{
		stack_b.tab[i] = stack_b.tab[i - 1];
		i--;
	}
	stack_b.tab[0] = stack_a.tab[0];
	i = 0;
	while (i <= stack_a.len - 2)
	{
		stack_a.tab[i] = stack_a.tab[i + 1];
		i++;
	}
	ft_putstr("pb\n");
	update_tab(stack_a.tab, stack_a.len - 1);
	stack_a.len--;
}

void	ra(a stack_a, int oke)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack_a.tab[0];
	while (i <= stack_a.len - 2)
	{
		stack_a.tab[i] = stack_a.tab[i + 1];
		i++;
	}
	stack_a.tab[i] = temp;
	if (oke != 1)
		ft_putstr("ra\n");
}

void	rb(b stack_b, int oke)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack_b.tab[0];
	while (i <= stack_b.len - 2)
	{
		stack_b.tab[i] = stack_b.tab[i + 1];
		i++;
	}
	stack_b.tab[i] = temp;
	if (oke != 1)
		ft_putstr("rb\n");
}

void	rr(a stack_a, b stack_b)
{
	int	oke;

	oke = 1;
	ra(stack_a, oke);
	rb(stack_b, oke);
	ft_putstr("rr\n");
}

void	rra(a stack_a, int oke)
{
	int	i;
	int	temp;

	i = stack_a.len;
	temp = stack_a.tab[stack_a.len];
	while (i >= 1)
	{
		stack_a.tab[i] = stack_a.tab[i - 1];
		i--;
	}
	stack_a.tab[0] = temp;
	if (oke != 1)
		ft_putstr("rra\n");
}

void	rrb(b stack_b, int oke)
{
	int	i;
	int	temp;

	i = stack_b.len;
	temp = stack_b.tab[stack_b.len];
	while (i >= 1)
	{
		stack_b.tab[i] = stack_b.tab[i - 1];
		i--;
	}
	stack_b.tab[0] = temp;
	if (oke != 1)
		ft_putstr("rrb\n");
}

void	rrr(a stack_a, b stack_b)
{
	int	oke;

	oke = 1;
	rra(stack_a, oke);
	rrb(stack_b, oke);
	ft_putstr("rrr\n");
}

int	pos_mini(int *tab, int min)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == min)
			break ;
		i++;
	}
	return (i);
}

// int	is_mini_on_top(a stack_a)
// {
// 	int	min;

// 	min = min_tab(stack_a.tab);
// 	if (stack_a.tab[0] == min)
// 		return (1);
// 	else
// 		return (0);
// }
/*
void	put_the_x_min_on_b(a stack_a, b stack_b, int x)
{
	int	min;
	int	pos;
	int	i;

	i = 0;
	min = min_tab(stack_a.tab);
	pos = pos_mini(stack_a.tab, min);
	while (i < x)
	{
		if (pos < (stack_a.len / 2))
		{
			while (ra(stack_a, 0) != 1)
			//while (is_mini_on_top(stack_a) != 1)
			{
				//printf("%d", is_mini_on_top(stack_a));
				ra(stack_a, 0);
			}
		}
		else
		{
			while (rra(stack_a, 0) != 1)
			//while (is_mini_on_top(stack_a) != 1)
			{
				//printf("%d", is_mini_on_top(stack_a));
				rra(stack_a, 0);
			}
		}
		pb(stack_a, stack_b);
		i++;
	}
}*/
