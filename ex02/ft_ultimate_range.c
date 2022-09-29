/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchet <mabuchet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:20:19 by mabuchet          #+#    #+#             */
/*   Updated: 2022/09/29 17:03:02 by mabuchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = (int *)malloc(sizeof(int) * (max));
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	i = -1;
	while (++i < max)
		(*range)[i] = min + i;
	return (max);
}
