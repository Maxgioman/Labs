#include <stdio.h>

typedef struct STADIUM
{
	char name[10];
	char type[10];
	int year;
	int amount;
}STADIUM;

int main(int argc,char* argv[])
{
	FILE* fl;
	int num;
	printf("Enter number of stadiums\n");
	scanf("%d",&num);
	fl = fopen("Testlab8.txt","w");
	if(fl == NULL)
	{
		printf("Error");
		return -1;
	}
	STADIUM n;
	STADIUM arr[num];

	for(int i = 1; i <=num;i++)
	{
		printf("name = "); scanf("%s",n.name);
  		printf("year = "); scanf("%d",&n.year);
  		printf("amount = "); scanf("%d",&n.amount);
  		printf("type = "); scanf("%s",n.type);
	  	printf("\n");

  		fwrite(&n, sizeof(STADIUM),1,fl);
	}

	freopen("Testlab8.txt","r",fl);
	int i = 0;
	while(!feof(fl) && i < num)
	{
		fread(&arr[i],sizeof(STADIUM),1,fl);
		printf("%s\t, %d\t, %d\t, %s\n",arr[i].name,arr[i].year, arr[i].amount, arr[i].type);
		i++;
	}

printf("KILLING ELEMENTS\n\n");
	freopen("Testlab8.txt","w",fl);
	printf("Enter year\n\n");
	int yearAft;
	scanf("%d",&yearAft);
	int count = 0;
	for(i = 0; i < num;i++)
	{
		if(arr[i].year < yearAft)
		{
			count++;
			continue;
		}

		fwrite(&arr[i],sizeof(STADIUM),1,fl);
	}
	freopen("Testlab8.txt","r",fl);
	STADIUM stadium1[num - count];
	i = 0;
	while(!feof(fl) && i < num-count)
	{
		fread(&stadium1[i],sizeof(STADIUM),1,fl);
		printf("%s\t, %d\t, %d\t, %s\n",stadium1[i].name,stadium1[i].year, stadium1[i].amount, stadium1[i].type);
		i++;
    }

printf("ADDING ELEMENT:\n\n");
	freopen("Testlab8.txt","w",fl);
	STADIUM addElement;

		printf("name = "); scanf("%s",addElement.name);
  		printf("year = "); scanf("%d",&addElement.year);
  		printf("amount = "); scanf("%d",&addElement.amount);
  		printf("type = "); scanf("%s",addElement.type);
	  	printf("\n");
		fwrite(&addElement,sizeof(STADIUM),1,fl);
		for(i = 0; i < num-count;i++)
		{
			fwrite(&stadium1[i],sizeof(STADIUM),1,fl);
		}

	freopen("Testlab8.txt","r",fl);
	i = 0;
	STADIUM stadium2[num-count+1];
	while(!feof(fl) && i < num-count +1)
	{
		fread(&stadium2[i],sizeof(STADIUM),1,fl);
		printf("%s\t, %d\t, %d\t, %s\n",stadium2[i].name,stadium2[i].year, stadium2[i].amount, stadium2[i].type);
		i++;
    }
	fclose(fl);
}
