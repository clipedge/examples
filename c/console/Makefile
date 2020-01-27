# ---------------------------------------------------------------------------
# Makefile
# ---------------------------------------------------------------------------
# cc getkeycode.c -o getkeycode game -lncurses

IDIR=include
CC=cc
CFLAGS=-I$(IDIR)

ODIR=obj
#LDIR=lib

LIBS=-lncurses

_DEPS = clipedge/game.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=getkeycode.o
_OBJ+=game.o

OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBS)

getkeycode: $(OBJ)
	$(CC) -o $@ $^ $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core
