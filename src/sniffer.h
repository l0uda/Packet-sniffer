//
// Created by louda on 11/16/20.
//

#ifndef ISA_SSL_SNIFFER_H
#define ISA_SSL_SNIFFER_H
#define CHECK(checked,msg) if(checked) {fprintf(stderr,msg);return 1;}    /// makro na kontrolu navratovych hodnot funkci a pripadne volani error funkce


int sniff(char* interface);

#endif //ISA_SSL_SNIFFER_H
