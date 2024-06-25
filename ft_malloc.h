/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:06:44 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 16:37:54 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_link
{
	void			*data;
	struct s_link	*next;
}					link_t;

int		*get_bad(void);
int		leak_size(void);

void	link_free();
void	fail_t(int nbr);
void	free_t(void *ptr);
void	link_rm(void *ptr);
void	*malloc_t(size_t size);
void	link_append(link_t *new);
void	*malloc_t_bad(size_t size);

link_t	**get_head(void);

#endif