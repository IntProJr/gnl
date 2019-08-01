/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosalee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 20:16:55 by lrosalee          #+#    #+#             */
/*   Updated: 2019/05/21 20:16:56 by lrosalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include "libft/libft.h"

typedef struct		s_gnl
{
	char			*content;
	size_t			content_size;
	struct s_gnl	*next;
	int				fd;
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
