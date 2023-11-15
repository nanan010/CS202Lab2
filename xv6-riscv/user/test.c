#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
struct  pinfo {   
int ppid;   
int syscall_count;   
int page_usage; 
}; 
int main(int argc, char *argv[]){
int n=0;
int mem = 65536;
if (argc>=2) n = atoi(argv[1]);
printf("Say hello to kernel %d\n",n);
hello(n);
 struct pinfo param;     
 param.ppid = 100;
 param.syscall_count = 200;  
malloc(mem);
 for (int j = 0; j < 3; j++)         
 	procinfo(&param); // calls 10 times       
 printf("[procinfo %d] ppid: %d, syscalls: %d, page usage: %d\n",getpid(), param.ppid, param.syscall_count, param.page_usage); 
//procinfo();
exit(0);
}
