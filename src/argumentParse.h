//
// Created by louda on 11/15/20.
//

#ifndef ISA_SSL_ARGUMENTPARSE_H
#define ISA_SSL_ARGUMENTPARSE_H

#define INPUT argv[2]

enum {
   WRONG_ARG   = 0,
   SNIFF       = 1,
   PCAPNG      = 2
};

int parseArg(int argc, char** argv);

#endif //ISA_SSL_ARGUMENTPARSE_H
