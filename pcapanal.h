//
// Created by louda on 11/16/20.
//

#ifndef ISA_SSL_PCAPANAL_H
#define ISA_SSL_PCAPANAL_H

#define ENDLO(longy) ((int)(endian ?  ntohl(longy) : longy))

typedef struct SSLconnection SSLconnection;

struct SSLconnection{
    int port1;
    int port2;
    char* addr1;
    char* addr2;
    char* SNI;
    struct timeval *ts;
    int packetCount;
    int byteCount;
    int finned;
    SSLconnection* next;
    SSLconnection* prev;
};



void SSLadd(int port1, char* addr1, int port2, char* addr2, char* SNI, int payload, __time_t tv_sec, __suseconds_t tv_usec);
void SSLdelete(int port1, char* addr1, int port2, char* addr2);
void SSLinit();
void SSLinc(int port1, char* addr1, int port2, char* addr2, int payload);
void SSLprint(int port1, char* addr1, int port2, char* addr2, __time_t tv_sec, __suseconds_t tv_usec);
void SSLbytespls(int port1, char* addr1, int port2, char* addr2, int payload);
int SSLexist(int port1, char* addr1, int port2, char* addr2);
int isFinned(int port1, char* addr1, int port2, char* addr2);
int analyze(char* filename);

#endif //ISA_SSL_PCAPANAL_H
