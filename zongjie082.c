#include<stdio.h>
#define alert() (putchar('\a'))
#define putchar_ln(c) (putchar(c),putchar('\n'))
int main(void){
    int ch;
    int sum=0;

    while((ch=getchar())!=EOF){
        if(ch>='0'&&ch<='9')
        sum+=ch-'0';
        if(ch=='\n'){
            alert();
            putchar('\n');
        }else{
            putchar_ln(ch);
        }
    }
    printf("所有数字之和为%d。\n",sum);

    return 0;
}