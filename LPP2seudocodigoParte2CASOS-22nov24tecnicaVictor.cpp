#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <iostream>
using namespace std;

int n;
char g;
float h;
char leo[21];
void main() {
	cprintf("	MENU	");
	cprintf("\r\n");
	cprintf(" OPCION  uno ");
	cprintf("\r\n");
	cprintf(" OPCION dos ");
	cprintf("\r\n");
	cprintf(" OPCION tres ");
	cprintf("\r\n");
	cprintf(" OPCION ocho ");
	cprintf("\r\n");
	cprintf(" OPCION cinco ");
	cprintf("\r\n");
	cprintf(" OPCION seis ");
	cprintf("\r\n");
	cprintf("CPN OTRA ERRROR ");
	cprintf("\r\n");
	cprintf("Ingrese numero de opcion : ");
	cin >> n;
	if (n == 1){
		cprintf(" uno ");
	}
	else if (n == 2){
		cprintf(" dos ");
	}
	else if (n == 3){
		cprintf(" tres ");
	}
	else if (n == 4){
		cprintf(" ocho ");
	}
	else if (n == 5){
		cprintf(" cinco ");
	}
	else if (n == 6){
		cprintf(" once ");
	}
	else {
		cprintf("ERROR");
	}
}
