#include<stdio.h>
#include<string.h>
struct student{
int id;
int roll;
char name[45];

};
int main(){
struct student anjan,ranjan;
anjan.id=25;
anjan.roll=401;
//anjan.name="Anjan Kumar Das";
strcpy(anjan.name,"Anajn Kumar Das");
printf("The id of Anjan is :%d \n",anjan.id);
printf(" The roll number of Anjan is:%d \n",anjan.roll);
printf("the name of Anjan is %s:",anjan.name);
}
