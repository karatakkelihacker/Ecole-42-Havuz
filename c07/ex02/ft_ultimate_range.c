/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdonmez <zdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:48:18 by zdonmez           #+#    #+#             */
/*   Updated: 2024/02/13 18:48:42 by zdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		diff;
	int		index;
	int		*repo;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	repo = malloc(diff * sizeof(int));
	if (!repo)
	{
		*range = 0;
		return (-1);
	}
	*range = repo;
	index = 0;
	while (index < diff)
	{
		repo[index] = min + index;
		index++;
	}
	return (diff);
}
