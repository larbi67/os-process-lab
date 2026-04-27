#include <stdio.h>
#include <unistd.h>
int main() {
 pid_t pid;
 printf("Avant fork() - PID=%d\n", getpid());
 sleep(10); // temps pour observer le processus AVANT fork
 pid = fork();
 if (pid < 0) {
 printf("Erreur fork\n");
 }
 else if (pid == 0) {
 // FILS
 printf("FILS : PID=%d, PPID=%d (RUNNING)\n", getpid(), getppid());
 sleep(20); // laisse le temps d'observer le fils
 }
 else {
 // PARENT
 printf("PARENT : PID=%d, PID fils=%d (RUNNING)\n", getpid(), pid);
 sleep(20); // laisse le temps d'observer le parent
 }
 return 0;
}
