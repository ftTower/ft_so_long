/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presettings_get_map.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:20:06 by tauer             #+#    #+#             */
/*   Updated: 2024/03/11 12:01:25 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

char	*clean_linefeed(char *str)
{
	size_t	i;
	size_t	i2;
	char	*dup;

	i = 0;
	i2 = 0;
	while (str[i] && str[i] != '\n')
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	while (i2 < i)
	{
		dup[i2] = str[i2];
		i2++;
	}
	dup[i2] = '\0';
	free(str);
	return (dup);
}

// char	**get_map(char *path)
// {
// 	int		fd;
// 	int		size;
// 	int		i;
// 	char	**map;
// 	char	*temp;

// 	i = 0;
// 	fd = open(path, O_RDONLY);
// 	size = count_line(fd);
// 	close(fd);
// 	map = (char **)malloc(sizeof(char *) * (size + 1));
// 	if (!map)
// 		return (NULL);
// 	fd = open(path, O_RDONLY);
// 	while (i < size)
// 	{
// 		temp = clean_linefeed(get_next_line(fd));
// 		map[i] = temp;
// 		i++;
// 	}
// 	map[i] = NULL;
// 	close(fd);
// 	// print_map(map);
// 	return (map);
// }

void	*malloc_t(unsigned size)
{
	void	*myvar;

	myvar = malloc(size);
	if (!myvar)
		exit(1);
	return (myvar);
}

void    ft_strmcat(char **dst, char *src)
{
    char    *out;
    int        dst_len;
    int        src_len;
    int        k;

    dst_len = ft_strlen(*dst);
    src_len = ft_strlen(src);
	out = malloc_t((dst_len + src_len + 1) * sizeof(char));
    k = 0;
    while (k < (dst_len + src_len))
    {
        if (k < dst_len)
            out[k] = (*dst)[k];
        else
        {
            if (src[k - dst_len] == -1)
                break ;
            out[k] = src[k - dst_len];
        }
        k++;
    }
    out[k] = '\0';
    free(*dst);
    *dst = out;
}

char	**get_map(char *path)
{
	int fd;
	char *map_line;
	char *line;
	int		i;

	i = 1;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	map_line = ft_strdup("");
	line = get_next_line(fd);
	while(line)
	{
		ft_strmcat(&map_line, line);
		// printf("%d - %s",i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	// printf("map_line : %s\n", map_line);
	free(line);
	close(fd);
	return (ft_split(map_line, '\n'));
}

int	count_line(int fd)
{
	char	*line;
	int		i;

	i = 0;
	line = get_next_line(fd);
	if (!line)
	{
		free(line);
		return (0);
	}
	while (line)
	{
		i++;
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	return (i);
}
