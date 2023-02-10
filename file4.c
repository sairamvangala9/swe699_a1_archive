#include <stdio.h>
#include <sys/utsname.h>
#include<string.h>
#include<unistd.h>
int main()
{
struct utsname sysInfo;
uname(&sysInfo);
printf(" The sysname is: %s\n",sysInfo.sysname);
printf(" The nodename is: %s\n", sysInfo.nodename);
printf(" The Machinename is: %s\n", sysInfo.machine);
printf("Team is :");
printf("\n\tJagruthi Ashwath");
printf("\n\tAbhijeet Ghadge");
printf("\n\tSai sameer Reddy Munnangi");
printf("\n\tJoel Samson");
printf("\n\tSai Ram Vangala");
printf("\n");
return -1;
}
