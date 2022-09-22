#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int delete_line,count=0,i,pos;
char filename[1000];
char fname[100];
FILE *fp;
printf("enter the deleting line number");
scanf("%d",&delete_line);
printf("enter or copy the file location");
scanf("%s",&fname);
fp = fopen(fname,"r+");
if(fp==NULL)
{
    printf("error");
    exit(1);
}
else
{
while(fgets(filename,strlen(filename),fp)!=NULL){
    count++;
    if(count==delete_line)
    {
        break;
        i=ftell(fp);
    }
    else if(delete_line==1)
    {
        printf("You've already read past it when you set i th position\n");
        printf("so it is not work for first line");
    }
}

while(fgets(filename,60,fp)!=NULL){
    pos=ftell(fp);
    fseek(fp,i, SEEK_SET);
    fprintf(fp,"%s",filename);
    i=pos;
    fseek(fp,0,SEEK_CUR);
}
}
fclose(fp);
}