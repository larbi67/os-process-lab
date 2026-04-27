#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() {
 pid_t pid;
 printf("Avant fork PID=%d\n", getpid());
 sleep(5); // observer avant fork
 pid = fork();
 if (pid == 0) {
 // FILS
 printf("FILS : PID=%d (avant exec)\n", getpid());
 sleep(5); // observer le fils avant exec
 execl("/bin/ls", "ls", "-l", NULL);
 // Ne sera jamais exécuté si exec réussit
 printf("FILS : après exec\n");
 }
 else {
 // PARENT
 printf("PARENT : PID=%d, PID fils=%d\n", getpid(), pid);
 sleep(5); // observer avant wait
 wait(NULL);
 printf("PARENT : fils terminé\n");
 sleep(5); // observer après fin
 }
 return 0;
}
