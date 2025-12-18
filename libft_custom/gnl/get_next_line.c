/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:51:52 by parenvoi          #+#    #+#             */
/*   Updated: 2025/11/20 10:53:01 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	create_line(char **after_line, char **tmp, char **line)
{
	size_t	line_len;
	char	*end_line;

	*tmp = ft_strndup_gnl(*after_line, ft_strlen_gnl(*after_line));
	if (*after_line)
		free(*after_line);
	*after_line = NULL;
	if (ft_strchr_gnl(*tmp, '\n') != NULL)
	{
		end_line = ft_strchr_gnl(*tmp, '\n');
		line_len = (ft_strlen_gnl(*tmp) - ft_strlen_gnl(end_line) + 1);
		*line = ft_strndup_gnl(*tmp, line_len);
		*after_line = ft_strndup_gnl(end_line + 1, ft_strlen_gnl(end_line + 1));
		free(*tmp);
		return ;
	}
	*line = ft_strndup_gnl(*tmp, ft_strlen_gnl(*tmp));
	free(*tmp);
	return ;
}

void	take_data(char **buff, char **after_line, char **tmp)
{
	*tmp = ft_strndup_gnl(*after_line, ft_strlen_gnl(*after_line));
	free(*after_line);
	*after_line = ft_strjoin_gnl(*tmp, *buff);
	free(*tmp);
	return ;
}

int	check_read_size(char **after_line, char **buff, ssize_t read_size)
{
	if (read_size == -1)
	{
		free(*after_line);
		free(*buff);
		*after_line = NULL;
		return (1);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	ssize_t		read_size;
	char		*buff;
	char		*line;
	char		*tmp;
	static char	*after_line = NULL;

	if (fd < 0 || fd > 1024)
		return (NULL);
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	read_size = 1;
	while (ft_strchr_gnl(after_line, '\n') == NULL && read_size != 0)
	{
		read_size = read(fd, buff, BUFFER_SIZE);
		if (check_read_size(&after_line, &buff, read_size) == 1)
			return (NULL);
		buff[read_size] = '\0';
		take_data(&buff, &after_line, &tmp);
	}
	free(buff);
	create_line(&after_line, &tmp, &line);
	return (line);
}
