//header file fun.cpp
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/shm.h>
#include<arpa/inet.h>
void createShm();
void destroyShm();
short writetoShm();
int createSocket(const char*,int);
