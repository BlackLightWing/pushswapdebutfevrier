/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:00:31 by msorbell          #+#    #+#             */
/*   Updated: 2023/01/31 11:46:22 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

//# include <unistd.h>
#include <stdlib.h>
//#include <string.h>
#include <stdio.h>

typedef	struct	tab_a {
	int	*tab;
	int	len;
} a;

typedef	struct	tab_b {
	int	*tab;
	int	len;
} b;

# define PUSH_SWAP_H

void	sa(int *tab, int oke);
void	sb(int *tab, int oke);
void	ss(int *tab, int *tab_b);
void	pa(a stack_a, b stack_b);
void	pb(a stack_a, b stack_b);
void	ra(a stack_a, int oke);
void	rb(b stack_b, int oke);
void	rr(a stack_a, b stack_b);
void	rra(a stack_a, int oke);
void	rrb(b stack_b, int oke);
void	rrr(a stack_a, b stack_b);
int		min_tab(int	*tab, int len);
//void	put_the_x_min_on_b(a stack_a, b stack_b, int x);
int		pos_mini(int *tab, int min);
void	algo_3(a stack_a);
void	algo_5(a stack_a, b stack_b);
void	algo_100(a stack_a, b stack_b);
void	algo_500(a stack_a, b stack_b);
int		ft_atoi(const char *str);
int		ft_put_in_tab(char *str, int *tab, int i);
int		spliting(char *str, char space, int i);
void	update_tab(int *tab, int len);
void	put_the_2_min_on_b(a stack_a, b stack_b);

#endif
