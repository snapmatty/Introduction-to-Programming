CPP    = g++
RM     = rm -f
OBJS   = main.o

LIBS   =
CFLAGS =

.PHONY: kalk2.0.exe clean clean-after

all: kalk2.0.exe

clean:
	$(RM) $(OBJS) kalk2.0.exe

clean-after:
	$(RM) $(OBJS)

kalk2.0.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

main.o: main.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

