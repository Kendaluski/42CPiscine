NAME = rush-02
OBJECTS = main.o numbers.o show.o
FLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJECTS)
	@cc $(FLAGS) $(OBJECTS) -o $(NAME)
	echo "Se ha compilado correctamente"

.SILENT:
main.o : main.c numbers.c show.c
numbers.o : numbers.c
show.o : show.c

.PHONY : fclean
fclean:
	@rm -f *.o
	clear
	echo "Se han borrado los archivos .o"
