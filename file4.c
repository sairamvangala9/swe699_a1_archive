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
printf("\n\t Jagruthi Ashwath");
printf("\n\t Abhijeet Ghadge");
printf("\n\t Sai sameer Reddy Munnangi");
printf("\n\t Joel Samson");
printf("\n\t Sai Ram Vangala");
return 0;
}

