#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "argumentParse.h"
#include "sniffer.h"
#include "pcapanal.h"


int main(int argc, char* argv[]) {
    int variant = parseArg(argc,argv);

    switch (variant){
        case WRONG_ARG:
            fprintf(stderr,"Spoustejte program s vhodnymi argumenty, navod naleznete v manualove strance.\n");
            return 1;
        case PCAPNG:
            analyze(INPUT);
            break;
        case SNIFF:
            sniff(INPUT);
            break;
    }

    return 0;
}
