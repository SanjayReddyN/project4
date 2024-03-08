typedef unsigned int uint;
#include "types.h"
#include "stat.h"
#include "user.h" 
#include "fcntl.h"

int main(int argc, char* argv[]) {
	int addr = 0;
	int length = 0;
	int flags = 0;
	int fd = 0;
	printf(1, "wmap test\n");
	return wmap(addr, length, flags, fd);
}
