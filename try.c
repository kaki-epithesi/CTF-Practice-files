#include<stdio.h>

long function2(int param_1)

{
  int local_10;
  int local_c;
  
  local_10 = 1;
  local_c = 2;
  do {
    if (param_1 / 2 < local_c) {
LAB_001011e7:
      return (long)local_10;
    }
    if (param_1 % local_c == 0) {
      local_10 = 0;
      goto LAB_001011e7;
    }
    local_c = local_c + 1;
  } while(1);
}

long function1(int param_1,int param_2)

{
  long uVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = param_1;
  while (local_c <= param_2) {
    uVar1 = function2(local_c);
    if ((int)uVar1 == 1) {
      local_10 = local_10 + 1;
    }
    local_c = local_c + 1;
  }
  return (long)local_10;
}


int main(int argc, char const *argv[])
{
	long ans;
	int a,b;
	scanf("%d%d",&a,&b);
	ans = function1(a,b);
	printf("%d\n",ans);
	return 0;
}