//Write a Program to generate mark sheets for a student. 

#include<stdio.h>

struct student{
  int Roll; 
  char Name[100];
  float Chemistry; 
  float Mathematics; 
  float Physics;
 float per;
	float total;
};

int main(){

	struct student s1;
	struct student s2;
	struct student s3;
	struct student s4;
	struct student s5;
	
    printf("Enter the detail of student 1 \n");	
	printf("Ente the roll no of student:");
	scanf("%d",&s1.Roll);
	printf("Enter the name of the student\n(note name_surname)\n:");
    scanf("%s",&s1.Name);
	printf("Ente the marks of Chemistry :");
	scanf("%f",&s1.Chemistry);
	printf("Ente the marks of Mathematics:");
	scanf("%f",&s1.Mathematics);
	printf("Ente the marks of Physics:");
	scanf("%f",&s1.Physics);
	s1.total=s1.Chemistry+s1.Mathematics+s1.Physics;
	s1.per=(s1.total/300)*100;
	printf("\n%s(%d)\n",s1.Name,s1.Roll);
	printf("Chemistry => %.2f\n",s1.Chemistry);
	printf("Mathematics => %.2f\n",s1.Mathematics);
    printf("Physics => %.2f\n",s1.Physics);
	printf("Total marks = %.2f\n",s1.total);
	printf("Percentage = %.2f\n",s1.per);
	
	printf("\nEnter the detail of student 2 \n");	
	printf("Ente the roll no of student:");
	scanf("%d",&s2.Roll);
	printf("Enter the name of the student\n(note name_surname)\n:");
    scanf("%s",&s2.Name);
	printf("Ente the marks of Chemistry :");
	scanf("%f",&s2.Chemistry);
	printf("Ente the marks of Mathematics:");
	scanf("%f",&s2.Mathematics);
	printf("Ente the marks of Physics:");
	scanf("%f",&s2.Physics);
	s2.total=s2.Chemistry+s2.Mathematics+s2.Physics;
	s2.per=(s2.total/300)*100;
	printf("\n%s(%d)\n",s1.Name,s2.Roll);
	printf("Chemistry => %.2f\n",s2.Chemistry);
	printf("Mathematics => %.2f\n",s2.Mathematics);
    printf("Physics => %.2f\n",s2.Physics);
	printf("Total marks = %.2f\n",s2.total);
	printf("Percentage = %.2f\n",s2.per);
	
	printf("\nEnter the detail of student 3 \n");	
	printf("Ente the roll no of student:");
	scanf("%d",&s3.Roll);
	printf("Enter the name of the student\n(note name_surname)\n:");
    scanf("%s",&s3.Name);
	printf("Ente the marks of Chemistry :");
	scanf("%f",&s3.Chemistry);
	printf("Ente the marks of Mathematics:");
	scanf("%f",&s3.Mathematics);
	printf("Ente the marks of Physics:");
	scanf("%f",&s3.Physics);
	s3.total=s3.Chemistry+s3.Mathematics+s3.Physics;
	s3.per=(s3.total/300)*100;
	printf("\n%s(%d)\n",s3.Name,s3.Roll);
	printf("Chemistry => %.2f\n",s3.Chemistry);
	printf("Mathematics => %.2f\n",s3.Mathematics);
    printf("Physics => %.2f\n",s3.Physics);
	printf("Total marks = %.2f\n",s3.total);
	printf("Percentage = %.2f\n",s3.per);
	
	printf("\nEnter the detail of student 4 \n");	
	printf("Ente the roll no of student:");
	scanf("%d",&s4.Roll);
	printf("Enter the name of the student\n(note name_surname)\n:");
    scanf("%s",&s4.Name);
	printf("Ente the marks of Chemistry :");
	scanf("%f",&s4.Chemistry);
	printf("Ente the marks of Mathematics:");
	scanf("%f",&s4.Mathematics);
	printf("Ente the marks of Physics:");
	scanf("%f",&s4.Physics);
	s4.total=s4.Chemistry+s4.Mathematics+s4.Physics;
	s4.per=(s4.total/300)*100;
	printf("\n%s(%d)\n",s1.Name,s4.Roll);
	printf("Chemistry => %.2f\n",s4.Chemistry);
	printf("Mathematics => %.2f\n",s4.Mathematics);
    printf("Physics => %.2f\n",s4.Physics);
	printf("Total marks = %.2f\n",s4.total);
	printf("Percentage = %.2f\n",s4.per);
	
	printf("\nEnter the detail of student 5 \n");	
	printf("Ente the roll no of student:");
	scanf("%d",&s5.Roll);
	printf("Enter the name of the student\n(note name_surname)\n:");
    scanf("%s",&s5.Name);
	printf("Ente the marks of Chemistry :");
	scanf("%f",&s5.Chemistry);
	printf("Ente the marks of Mathematics:");
	scanf("%f",&s5.Mathematics);
	printf("Ente the marks of Physics:");
	scanf("%f",&s5.Physics);
	s5.total=s5.Chemistry+s5.Mathematics+s5.Physics;
	s5.per=(s5.total/300)*100;
	printf("\n%s(%d)\n",s5.Name,s5.Roll);
	printf("Chemistry => %.2f\n",s5.Chemistry);
	printf("Mathematics => %.2f\n",s5.Mathematics);
    printf("Physics => %.2f\n",s5.Physics);
	printf("Total marks = %.2f\n",s5.total);
	printf("Percentage = %.2f\n",s5.per);
	
	
}
