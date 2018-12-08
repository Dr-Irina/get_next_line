/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:32:03 by hrice             #+#    #+#             */
/*   Updated: 2018/12/08 18:22:34 by hrice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 42

typedef struct			s_new_l
{
	char				*str;
	int					file;
	struct s_new_l		*next;

}						t_new_l;

int						get_next_line(int const fd, char **line);

#endif
