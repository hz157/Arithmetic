#include <stdio.h>
#include <string.h>
int main(){
    int n,find_n;
    scanf("%d",&n);
    char id_card[1000][16]={'0'};
    int data[1000]={0};
    int data2[1000]={0};
    int find_data[1000]={0};
    for(int i=0;i<n;i++){
        scanf("%s %d %d",id_card[i],&data[i],&data2[i]);
    }
    scanf("%d",&find_n);
    for(int i=0;i<find_n;i++){
        scanf("%d",&find_data[i]);
    }
    for(int i=0;i<find_n;i++){
        for(int k=0;k<1000;k++){
            if(find_data[i]==data[k]){
                for(int j=0;j<16;j++)
                    printf("%c",id_card[k][j]);
                printf(" %d\n",data2[k]);
            }
        }
    }
}
