#include <stdio.h>
#include <string.h>
int main(){
    char data[1000];
    int sum[10]={0};
    scanf("%s",data);
    for(int i=0;i<strlen(data);i++){
        for(int j=0;j<10;j++){
            if(data[i]-'0'==j)
                sum[j]=sum[j]+1;
        }
    }
    for(int i=0;i<10;i++){
        if(sum[i])
            printf("%d:%d\n",i,sum[i]);
    }
    return 0;
}