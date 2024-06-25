/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:07:29 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 16:27:23 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

link_t	**get_head(void)
{
	static link_t	*head = NULL;

	return (&head);
}

int	*get_bad(void)
{
	static int	bad = 0;

	return (&bad);
}