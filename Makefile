# Nom de la bibliothèque
NAME = libft.a

# Compilateur
CC = cc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror

# Liste de tous les fichiers .c à compiler
SRCS_BONUS = $(wildcard ft_*_bonus.c)

# Exclure les fichiers bonus
SRCS = $(filter-out ft_*_bonus.c,$(wildcard *.c))

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# Commande pour créer la bibliothèque statique
AR = ar rc

# Commande pour indexer la bibliothèque
LIB = ranlib

# Répertoire des en-têtes (s'il existe)
HEAD = .

# Règle pour la construction de la bibliothèque
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Règle pour la compilation des fichiers bonus
bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

#POUR LES TESTS A RETIRER###########################################################################
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

# Règle pour nettoyer les fichiers objets
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

# Règle pour nettoyer tous les fichiers générés
fclean: clean
	rm -f $(NAME)

# Règle pour recompiler tout depuis le début
re: fclean all

.PHONY: all clean fclean re bonus