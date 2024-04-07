CC = g++

CFLAGS = -std=c++11 -Wall -Wextra -pedantic -I include

# CPPFLAGS = 

SFMLFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

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

re: clean all