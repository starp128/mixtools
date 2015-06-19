#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
        int i,j,k,m,n;
        for (i=0;i<1000;i++)
                for(j=0;j<1000;j++)
                        for(k=0;k<1000;k++)
                                for(n=0;n<25;n++)
                                        m=m;
        printf("done looper\n");
	printf("my pid is %d\n",getpid());
        return 0;
}
