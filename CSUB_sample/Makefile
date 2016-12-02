CC	= /usr/bin/g++
CCFLAGS	= -I/opt/rmb/include
LD	= $(CC)
#LDFLAGS	= -fPIC -shared -L/opt/rmb/lib -lrmb
LDFLAGS	= -fPIC -DPIC -shared

LIB	= libmy_csub.so

$(LIB): my_csub.o
	$(LD) my_csub.o $(LDFLAGS) -o $(LIB)

my_csub.o: my_csub.c
	$(CC) -c $(CCFLAGS) my_csub.c
