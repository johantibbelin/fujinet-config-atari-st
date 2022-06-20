LIBCMINI = /opt/libcmini
CC=m68k-atari-mint-gcc
CFLAGS=-nostdlib $(LIBCMINI)/startup.o -I$(LIBCMINI)/include

ODIR=.
LDIR =$(LIBCMINI)/lib

LIBS=-lgcc -lcmini  

_DEPS = 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = conf_acc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

fnconfig.acc: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) -L$(LDIR) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
