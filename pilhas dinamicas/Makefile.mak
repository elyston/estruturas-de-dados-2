CC     = gcc
WINDRES= windres
RM     = rm -f
OBJS   = main.o \
         PILHA.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: teste\ pilha.exe clean clean-after

all: teste\ pilha.exe

clean:
	$(RM) $(OBJS) teste\ pilha.exe

clean-after:
	$(RM) $(OBJS)

teste\ pilha.exe: $(OBJS)
	$(CC) -Wall -s -o '$@' $(OBJS) $(LIBS)

main.o: main.c PILHA.h
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

PILHA.o: PILHA.c PILHA.h
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

