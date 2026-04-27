#include <stdio.h>
#include <unistd.h>
int main() {
 pid_t pid;
 printf("Avant fork PID=%d\n", getpid());
 sleep(5); // observer avant fork
 pid = fork();
 if (pid == 0) {
 // FILS
 printf("FILS : PID=%d terminé\n", getpid());
 }
 else {
 // PARENT
 printf("PARENT : PID=%d, PID fils=%d\n", getpid(), pid);
 printf("PARENT : sleep sans wait (zombie possible)\n");
 sleep(20); // laisser le temps d’observer le zombie
 }
 return 0;
}
