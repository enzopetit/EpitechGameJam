##
## EPITECH PROJECT, 2024
## MAkefile
## File description:
## Makefile
##

CC = g++

CFLAGS = -Wall -Wextra -std=c++11

INCLUDES = -Iinclude

SRCDIR = src

OBJDIR = obj

BINDIR = bin

TARGET = $(BINDIR)/app

SOURCES = $(wildcard $(SRCDIR)/*.cpp)

OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: clean fclean re