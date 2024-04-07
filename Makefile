CC = g++

CFLAGS = -std=c++11 -Wall -Wextra -pedantic

SFMLFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

EXEC = app

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(SFMLFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
