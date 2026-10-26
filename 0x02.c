//李茗昊26303050133
#include<stdio.h>
#include<string.h>
int main(){
    char s1[500]={0},s2[500]={0};
    int a[500]={0},b[500]={0},c[500]={0};
    scanf("%s",s1);
    scanf("%s",s2);
    int len1=strlen(s1),len2=strlen(s2);
    int i;
    for(i=0;i<len1;i++){
        a[i]=s1[len1-i-1]-'0';
    }
    for(i=0;i<len2;i++){
        b[i]=s2[len2-i-1]-'0';
    }
    for(i=0;i<len1||i<len2;i++){
        c[i]+=a[i]+b[i];
        if(c[i]>=10){
            c[i+1]=1;
            c[i]-=10;
        }
    }   
    int k=499;
    while(c[k]==0) k--;
    for(i=k;i>=0;i--){
        printf("%d",c[i]);
    }
return 0;    
}