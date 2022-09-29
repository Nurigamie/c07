/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchet <mabuchet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:12:30 by mabuchet          #+#    #+#             */
/*   Updated: 2022/09/29 16:36:28 by mabuchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	max -= min;
	tab = malloc(sizeof(int) * max);
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < max)
		tab[i] = min + i;
	return (tab);
}
