CC=zig cc
CFLAGS=-Wall -Wextra -std=c99
SRCDIR=src
BINDIR=.
LINK=-lm

SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(SRCS:$(SRCDIR)/%.c=%.o)

ifdef OS
   # Windows
   EXEC=$(BINDIR)\vec.exe
   RM= del /Q /F 
   RM_FILES=$(EXEC),$(OBJS),$(EXEC:.exe=.pdb)
else
   # Unix-like OS
   EXEC=$(BINDIR)/vec
   RM=rm -f
   RM_FILES=$(EXEC) $(OBJS)
endif


all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC) $(LINK)

%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(RM_FILES)

run: $(EXEC)
	$(EXEC)
