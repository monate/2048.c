#include <time.h>

time_t time(time_t *tloc) {
    return 0;
}

#include <stdlib.h>

void srand(unsigned int seed)
{
    return;
}

int rand(void)
{
    return 0;
}

#include <termios.h>
#include <unistd.h>

int tcgetattr(int fd, struct termios *termios_p) {
    struct termios t = {0};
    *termios_p = t;
    return 0;
}
int tcsetattr(int fd, int optional_actions,
              const struct termios *termios_p)
{
    return 0;
}
