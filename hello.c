#include <stdio.h>
//gcc -o hello hello.c ^C
int main(void){
  printf("helloWorld\n");
  /*
  int num = 256;
  printf("%d\n",num);

  int arr[10] = {1,2,3,4,5,6,7,8,9,0};
  printf("%d%d%d%d%d%d%d%d%d%d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);

  char str1[10] = "hoge";
  printf("%s\n",str1);
  printf("%ld\n",sizeof(str1));
  char str2[] = "hoge";
  printf("%s\n",str2);
  printf("%ld\n",sizeof(str2));
  char str3[] = "C言語";
  printf("%s\n",str3);
  printf("%ld\n",sizeof(str3));
  */
  int n;
  scanf("%d", &n);
  printf("n=%d\n",n);

  printf("n+10=%d\n",n+10);

  return 0;
}