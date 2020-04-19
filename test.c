#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	if(argc!=1 && atoi(argv[1])==1)
		info();
	else if (argc!=1 && atoi(argv[1])==2)
		infom();
	else if (argc!=1 && atoi(argv[1])==3)
		infom1();
	exit();
}
