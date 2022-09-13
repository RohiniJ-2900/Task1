#include<stdio.h>
#include<stdlib.h>
#define NUM_1 "1234"
#define NUM_2 "5678"
int main()
{
    int p,q;
    p = atoi (NUM_1);
    printf("%d\n",p);// printing NUM_1 as integer
    q = atoi (NUM_2);
    printf("%d\n",q);// printing NUM_2 as integer
    printf("%d\n",p+q);// printing addition as integer
}
