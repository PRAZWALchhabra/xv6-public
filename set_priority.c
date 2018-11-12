#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc, char *argv[])
{
    if (argc < 3){
        printf(2, "Incorrect Usage\n");
    }
    else{
        int pid = atoi(argv[1]), priority = atoi(argv[2]);
        if (priority < 0 || priority > 100){
            printf(2, "Invalid Priority Range [0-100]\n");
            exit();
        }
        printf(1, " For Process with Pid : %d priority is %d\n", pid, priority);
        set_priority(pid,priority);
    }
    exit();
}
