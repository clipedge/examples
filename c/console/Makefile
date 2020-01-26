# Makefile
# cc demo.c -o demo game -lncurses

IDIR=include
CC=cc
CFLAGS=-I$(IDIR)

ODIR=obj
#LDIR=lib

LIBS=-lncurses

_DEPS = clipedge/game.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=demo.o
_OBJ+=game.o

OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBS)

demo: $(OBJ)
	$(CC) -o $@ $^ $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core


# ---------------------------------------------------------------------------
# Makefile
# ---------------------------------------------------------------------------
#
## Avoid funny character set dependencies
#unexport LC_ALL
#LC_COLLATE=C
#LC_NUMERIC=C
#
#export LC_COLLATE LC_NUMERIC
#
#FOOBAR="Kleptomaniac Octopus"
#
#export FOOBAR 
#
#IDIR=include
#CC=cc
#CFLAGS=-I$(IDIR)
#
#ODIR=obj
#LDIR=lib
#
#LIBS=-lm
#
#_DEPS = helloworld/sample.h
#DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
#
#_OBJ=helloworld.o helloworld_functions.o
#OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))
#
#$(ODIR)/%.o: %.c $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)
#
#hellofoo: $(OBJ)
#	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
#
#.PHONY: clean
#
#clean:
#	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
