#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    printf("Début programme PID=%d\n", getpid());
    sleep(5); // observer avant fork

    pid = fork();

    if (pid == 0) {
        // FILS
        printf("FILS : PID=%d, PPID=%d (RUNNING)\n", getpid(), getppid());
        sleep(10); // simulation de travail
        printf("FILS : TERMINATED\n");
    }
    else {
        // PARENT
        printf("PARENT : PID=%d (WAITING...)\n", getpid());
        sleep(3); // temps pour observer avant wait
        wait(NULL); // attente du fils
        printf("PARENT : RUNNING après attente\n");
        sleep(10); // observer après reprise
    }

    return 0;
}
