##########################################################
# Created by: Group 3                                 #
# Created on: Tuesday 25 October 2022 13:24:59 PM IST #
##########################################################

SRCDIR = ../src
EXTDIR = ../external
INCLUDEDIR = ../include
OBJDIR = ../obj
BINDIR = ../bin
REPORTDIR = ../reports
CFLAGS = -c -g -Wall -I${INCLUDEDIR} -I../external/include 


all:

	gcc ${CFLAGS}  ${SRCDIR}/main.c -o ${OBJDIR}/main.o
	gcc ${CFLAGS}  ${SRCDIR}/showReco.c -o ${OBJDIR}/showReco.o
	gcc ${CFLAGS}  ${SRCDIR}/selectChoice.c -o ${OBJDIR}/selectChoice.o
	gcc ${CFLAGS}  ${SRCDIR}/loadStockData.c -o ${OBJDIR}/loadStockData.o
	gcc ${OBJDIR}/main.o ${OBJDIR}/showReco.o ${OBJDIR}/selectChoice.o ${OBJDIR}/loadStockData.o -o ${BINDIR}/stockScreener.bin

memcheck:
	valgrind ${BINDIR}/stockScreener.bin > ${REPORTDIR}/memcheck.txt 2>&1

errorcheck:
	splint ${SRCDIR}/*.c -I ${INCLUDEDIR} > ${REPORTDIR}/errorcheck.txt 

clean:

	rm ${OBJDIR}/main.o ${BINDIR}/stockScreener.bin  ${OBJDIR}/showReco.o ${OBJDIR}/selectChoice.o 


#################### End of Makefile #####################

