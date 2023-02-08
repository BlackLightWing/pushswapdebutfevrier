/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:26:55 by msorbell          #+#    #+#             */
/*   Updated: 2023/02/06 10:31:16 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_tab(int *tab, int len)
{
	tab = malloc(len);// * sizeof(int));
	/*
	int	i;
	int	*tab_tempo;

	i = 0;
	tab_tempo = malloc(len * sizeof(int));
	while (tab[i])
	{
		tab_tempo[i] = tab[i];
		i++;
	}
	tab_tempo[i] = 0;
	//free(&tab);
	tab = malloc(len * sizeof(int));
	i = 0;
	while (tab_tempo[i])
	{
		tab[i] = tab_tempo[i];
		i++;
	}
	free(tab_tempo);*/
}

int	spliting(char *str, char space, int i)
{
	int	res;

	res = 0;
	while (str[i] != space)
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	i++;
	return (res);
}

int	ft_put_in_tab(char *str, int *tab, int i)
{
	int	index;

	index = 0;
	while (str[i])
	{
		tab[index] = spliting(str, ' ', i);
		index++;
	}
	return (index);
}

int	main(int argc, char *argv[])
{
	a		stack_a;
	b		stack_b;
	static	int	i;
	int	index;

	index = 0;
	stack_b.len = 0;
	stack_b.tab = malloc(stack_b.len);// * sizeof(int));
	update_tab(stack_b.tab, stack_b.len);
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	else if (argc == 2)
	{
		stack_a.len = ft_put_in_tab(argv[1], stack_a.tab, i);
		stack_a.tab = malloc(stack_a.len);// * sizeof(int));
	}
	else
	{
		stack_a.tab = malloc((argc - 1));// * sizeof(int));
		/*stack_a.tab = malloc(argc * sizeof(int));
		while (i < argc)
		{
			stack_a.tab[index] = ft_atoi(argv[i]);
			i++;
			index++;
		}*/
		i = 1;
		while (i != argc)
		{
			stack_a.tab[index] = ft_atoi(argv[i]);
			//printf("%d\n%d\n", stack_a.tab[i], i);
			i++;
		}
		stack_a.len = i;
		//printf("%d", stack_a.len);
	}
	for(int i = 0;stack_a.tab[i];i++)
	{
		printf("tab[%d] = %d\n",i, stack_a.tab[i]);
		//printf("taille du tableau : %d\n", i);
	}
	if (stack_a.len == 3)
		algo_3(stack_a);
	if (stack_a.len == 5)
		algo_5(stack_a, stack_b);
	if (stack_a.len == 100)
		algo_100(stack_a, stack_b);
	if (stack_a.len == 500)
		algo_500(stack_a, stack_b);
	free(stack_a.tab);
	free(stack_b.tab);
	return (0);
}
