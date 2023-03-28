/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbali <bbali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:16:08 by bbali             #+#    #+#             */
/*   Updated: 2023/03/28 18:16:54 by bbali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		i;
	int		j;
	size_t	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (s[i])
	{
		while (reject[j])
		{
			if (s[i] && s[i] == reject[j])
				return (counter);
			j++;
		}
		if (j)
		{
			counter++;
			j = 0;
		}
		i++;
	}
	return (counter);
}
