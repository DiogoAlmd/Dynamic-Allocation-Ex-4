#include<stdio.h>

struct est1{
   int a;
};
struct est2{
   float d; 
   struct est1 num[2];
};

int main()
{
	int est2;
   struct est1 obj1={1};
   struct est2 obj2={0,{3,90}};
   printf("%d %d",obj2.num[-1],sizeof(est2));
   return 0;
}
