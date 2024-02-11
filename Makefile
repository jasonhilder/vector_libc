CC=gcc
CFLAGS=-Wall -Wextra -std=c99
SRCDIR=src
BINDIR=.
LINK=-lm

SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(SRCS:$(SRCDIR)/%.c=%.o)
EXEC=$(BINDIR)/vec

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC) $(LINK)

%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS)

run: $(EXEC)
	$(EXEC)