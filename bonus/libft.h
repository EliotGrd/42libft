/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:52:42 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/28 12:56:13 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define LIBFT_H

#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list *ft_lstnew(void *content);

#endif
