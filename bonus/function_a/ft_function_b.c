/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:33:06 by npalissi          #+#    #+#             */
/*   Updated: 2024/12/09 15:13:03 by edubois-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int sb(t_data *data)
{
	if (!sba(&data->stack_b))
		return (0);
	return (1);
}

int rb(t_data *data)
{
	if (!rba(&data->stack_b))
		return (0);
	return (1);
}

int rrb(t_data *data)
{
	if (!rrba(&data->stack_b))
		return (0);
	return (1);
}

int pb(t_data *data)
{
	pba(&data->stack_a, &data->stack_b);
	return (1);
}