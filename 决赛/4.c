#include<stdio.h>
#include<string.h>

int main(){
    char word[100];
    int flag2=0;
    while(scanf("%s",word)!=EOF)
	{
        int i,len,alpha[53]={0},flag=0;
        len=strlen(word);
        if(word[len-1]=='.')
		{
            word[len-1]='\0';
            len--;
            flag=1;
        }
        for(i=0;i<len;i++)
		{
            if(word[i]>='a' && word[i]<='z')
			{
                alpha[word[i]-'a']++;
            }
			else alpha[word[i]-'A'+1]++;
        }
        for(i=0;i<52;i++)
		{
            if(alpha[i] && alpha[i+1])
			{
                printf("%s ",word);
                flag2=1;
                break;
            }
        }
        
        if(flag==1) break;
    }
    if(flag2==0) printf("Accept!");
    return 0;
}
