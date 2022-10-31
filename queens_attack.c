#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    long int n,k;
    scanf("%ld %ld",&n,&k);
    int left,right,up,down,rq,cq,leftup,leftdown,rightup,rightdown,ro,co;
    scanf("%d %d",&rq,&cq);
    left=cq-1;
    right=n-cq;
    up=n-rq;
    down=rq-1;
    if(left<up)
    leftup=left;
    else {
    leftup=up;
    }
    if(left<down)
    leftdown=left;
    else {
    leftdown=down;
    }
    if(right<up)
    rightup=right;
    else {
    rightup=up;
    }
    if(right<down)
    rightdown=right;
    else {
    rightdown=down;
    }
    for(int i=0; i<k; i++)
    {
        scanf("%d %d",&ro,&co);
        if(ro==rq&&co<cq)
        {
            if(cq-co-1<left)
            left=cq-co-1;
        }
        else if(ro==rq&&co>cq)
        {
            if(co-cq-1<right)
            right=co-cq-1;
        }
        else if(co==cq&&ro<rq)
        {
            if(rq-ro-1<down)
            down=rq-ro-1;
        }
        else if(co==cq&&ro>rq)
        {
            if(ro-rq-1<up)
            up=ro-rq-1;
        }
        else if(co<cq&&ro>rq)
        {
            if((cq-co)==(ro-rq))
            {
                if(cq-co-1<leftup)
                leftup=cq-co-1;
            }
        }
        else if(co<cq&&ro<rq)
        {
            if((cq-co)==(rq-ro))
            {
                if(rq-ro-1<leftdown)
                leftdown=rq-ro-1;
            }
        }
        else if(co>cq&&ro>rq)
        {
            if((co-cq)==(ro-rq))
            {
                if(co-cq-1<rightup)
                rightup=co-cq-1;
            }
        }
        else if(co>cq&&ro<rq)
        {
            if((co-cq)==(rq-ro))
            {
                if(rq-ro-1<rightdown)
                rightdown=rq-ro-1;
            }
        }
    }
    int sum=left+right+up+down+leftup+leftdown+rightup+rightdown;
    printf("%d",sum);
    return 0;
}

