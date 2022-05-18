CC=g++
BIN=bin/
OBJ=obj/
INC=include/
SRC=src/
CFLAG=-c
OFLAG=-o
all:build-server build-client
build-server:func
	${CC} ${OFLAG} ${BIN}server14 ${SRC}server.cpp ${OBJ}func.o
func:
	${CC} ${CFLG} ${OFLAG} ${OBJ}func.o ${SRC}func.cpp ${INC}func.h
build-client:
	${CC} ${OFLAG} ${BIN}client14 ${SRC}client.cpp
start-server:
	./${BIN}server14
start-client:
	./${BIN}client14
clean:
	rm ${OBJ}func.o
	rm ${BIN}server14
	rm ${BIN}client14
