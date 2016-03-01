#include <wiringPi.h>
#include "paj7620.h"
#include <stdio.h>

int main(){
	wiringPiSetup();
	int fd;
	paj7620Init(fd);
	while(1){
		int data=0;
		paj7620ReadReg(fd,0x43,data);
//		printf("%x\n",data);
		if(data == GES_UP_FLAG)
			printf("up\n");
		if(data == GES_DOWN_FLAG)
			printf("down\n");
	}
}
