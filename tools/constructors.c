/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2026/01/22 13:11:47 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	find_duplicate(t_package *package)
{
	int	*list;
	int	index;
	int	ping;

	list = package->data;
	ping = 0;
	while (ping < package->size)
	{
		index = ping + 1;
		while (index < package->size)
		{
			if (list[ping] == list[index])
				return (1);
			index++;
		}
		ping++;
	}
	return (0);
}

static int	feed_package(t_package *package, int arg_count, char **arg_list)
{
	int	index;

	arg_count--;
	arg_list++;

	// Handle single argument case
		// Split the argument into separated strings
		// Allocate package->data using the number of word from the argument
		// Iterate over each and check for incorrect values and place them into package->data
		// If an invalid argument is spotted, free in the order bellow :
		//	-> Free each argument of the splited argument
		//	-> Free the holder of those freed arguments
		//	-> Return 0 to indicate failure to the new_pacakge() funtion
		// Even if arguments are correct, the temporary splitted argument must be freed
		//	-> Free each argument of the splitted arguments
		//	-> Free the holder of those freed arguments
		// HINT : Because the freeing process is twice the same, create a function that wraps it !
	// Handle multi-argument case
		// Allocate package->data using arg_count
		// Check for failure and return 0 in such case
		// Iterate over each and check for incorect values
		// If invalid argument, only return 0 since the new_package() function will handle cleaning

}

static t_stack	*new_stack(t_package *package) // CORRECT
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return ((t_stack *)0);
	if (package->data)
	{
		stack->content = package->data;
		stack->top = package->size - 2;
		stack->capacity = package->size;
		package->data = (int *)0;
	}
	else
	{
		stack->content = malloc(sizeof(int) * package->size);
		if (!stack->content)
			return ((t_stack *)0);
		stack->top = -1;
	}
	return (stack);
}

static void	set_fields(t_package *package, int size) // CORRECT
{
	package->data = (int *)0;
	package->a = (t_stack *)0;
	package->b = (t_stack *)0;
	package->size = size;
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;

	package = malloc(sizeof(t_package));
	if (!package)
		return ((t_package *)0);
	set_fields(package, arg_count);
	if (!feed_package(package, arg_count, arg_list))
		return (clean(package), (t_package *)0);
	if (find_duplicate(package))
		return (clean(package), (t_package *)0);
	package->a = new_stack(package);
	if (!package->a)
		return (clean(package), (t_package *)0);
	package->b = new_stack(package);
	if (!package->b)
		return (clean(package), (t_package *)0);
	return (package);
}
