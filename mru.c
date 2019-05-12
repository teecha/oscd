#include<stdio.h>
void main()
{

    int st[15],f[3][2],i,j,empty,target,max=0,a,x,m;

    float hit=0,fault=0;

    printf("emter the page requests");

for(i=0;i<12;i++)

scanf("%d",&st[i]);

for(i=0;i<3;i++)

    f[i][1]=-1;


for(i=0;i<12;i++)

{

    target=-1;

    for(j=0;j<3;j++)

    {

        if(st[i]==f[j][1])

        {

            target=0;

            hit++;

  f[j][0]=max;

  max++;

            break;

        }

    }

    if(target==-1)

    {

        empty=0;

        for(j=0;j<3;j++)

        {

            if(f[j][1]==-1)

            {

                f[j][1]=st[i];

                f[j][0]=max;

  max++;

                empty=1;


                break;

            }

        }

 if(empty==0)

        {

 x=-5;

            for(j=0;j<3;j++)

                if(f[j][0]>x)

  {

  a=j;

       x=f[j][0];

  }

 f[a][1]=st[i];

 f[a][0]=max;

 max++;


        }


        fault++;

    }

for(m=0;m<3;m++)

printf("%d",f[m][1]);

printf("\n");

}



printf("fault=%f,hit=%f",fault,hit);

printf("fault ratio=%f,hit ratio=%f ",fault/12,hit/12);

}



