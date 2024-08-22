/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:20:52 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/21 17:59:54 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tab(char **tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	word;
	int	count;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if ((s[i] != c) && word == 0)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static void	insert_word(char const *s, char c, char **tab, int word)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		tab[word][i] = s[i];
		i++;
	}
	tab[word][i] = '\0';
}

static int	insert_in_tab(char const *s, char c, char **tab, int count)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			tab[count] = (char *)malloc((j + 1) * sizeof(char));
			if (tab[count] == NULL)
				return (free_tab(tab, count), 1);
			insert_word(s + i, c, tab, count);
			i += j - 1;
			count++;
		}
		i++;
	}
	return (tab[count] = NULL, 0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;

	if (s == NULL)
		return (NULL);
	count = 0;
	tab = NULL;
	tab = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	if (insert_in_tab(s, c, tab, count) == 0)
		return (tab);
	else
		return (NULL);
}

/*#include <stdio.h>
int    main(void)
{
	char    **tab;
	int    	i;

	tab = ft_split("Hello my friend    how are  you", ' ');
	i = 0;
	while (i < 6)
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
