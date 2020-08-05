/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 14:19:03 by eniini            #+#    #+#             */
/*   Updated: 2020/08/05 12:23:58 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

/*
** soft FD limit. current system's soft cap can be checked with 'ulimit -n'
*/

# define FD_MAX 4096

# define BUFF_SIZE 40

int		get_next_line(const int fd, char **line);

#endif
