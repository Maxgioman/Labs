#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copyFile(FILE* fp,FILE* fpout);
void Print(FILE* fp);
void maxcon(FILE* fp);
void putTextInFile(FILE* fp);

int main(int argc, char* argv[])
{
	FILE* fp = fopen("lab9.txt","w");
	FILE* fpout = fopen("lab9out.txt","w");
	if(fp == NULL || fpout == NULL)
		return -1;

    putTextInFile(fp);
    freopen("lab9.txt","r",fp);
	copyFile(fp,fpout);
    freopen("lab9out.txt","r",fpout);
	printf("\nStrings of start file:\n");
	Print(fp);
	printf("\nStrings after copying in second file:\n");
	Print(fpout);
	freopen("lab9out.txt","r",fpout);
	maxcon(fpout);
	fclose(fp);
	fclose(fpout);
	return 0;
}

void copyFile(FILE* fp,FILE* fpout)
{
	char buffer[255];
	int N1,N2;
	printf("\nLines with only one word\n");
	int count = 1;
	while(fgets(buffer,sizeof(buffer),fp))
	{
		int k = strlen(buffer);
		if(buffer[k] == '\n')
			k--;
		if(buffer[k] != ' ')
		{
			fputs(buffer,fpout);
		}
		count++;
	}
}

void Print(FILE* fp)
{
	fseek (fp,0,SEEK_SET);
	fgetpos(fp,0);
	char* buffer = NULL;
	while(fgets(buffer,sizeof(buffer),fp))
	{
		printf("%s",buffer);
	}
}

void maxcon(FILE* fp)
{
	if(fp == NULL)
		exit(-1);
	int max;
	int tempcount = 0;
	int tempi = 1;;
	char buffer1[255];
	while(fgets(buffer1,sizeof(buffer1),fp))
	{
		int count = 0;
		char vowels[12] = {'a','e','i','o','u','y'};
		for(int i = 0; buffer1[i]!= '\0';i++)
		{
		if(buffer1[i] != 'a'&&buffer1[i] != 'e'&&buffer1[i] != 'i'&&buffer1[i] != 'o'&&buffer1[i] != 'u'&&buffer1[i] != 'y')
			count++;
		}
		if(count > tempcount)
		{
			tempcount = count;
			max = tempi;
		}
		tempi++;
	}
	if(max != 0)
		printf("\n\nString with number %d has the most consonant characters",max);
	else
		printf("There is not string with consonants");
	fclose(fp);
}
void putTextInFile(FILE* fp)
{
	int n;
	printf("How many lines do u want to write?\n");
	scanf("%d",&n);
	for(int i = 0; i < n+1;i++)
	{
		char tempbuffer[255];
		fgets(tempbuffer);
		if(i != 0)
		{
			fputs(tempbuffer,fp);
			fputc('\n',fp);
		}
	}
}
