#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define FILENAME "/dev/file1"
int main() {
    int fd = open(FILENAME, O_RDWR);

    const char *buff = "Hello Tessolve";
    read(fd,buff,sizeof(buff)-1);
    write(fd, buff, strlen(buff));
    printf("Line added");

   
//    printf("Read from device: %s\n", buff);

    close(fd);
    return 0;
}

