#include <stdio.h>

int main(){
    struct players{
    char Name[20];
    int age;
    int experience;
    int avg_salary;
    }a[3];

for(int i=0; i<3; i++){
    scanf("%s",a[i].Name);
    scanf("%d", &a[i].age);
    scanf("%d", &a[i].experience);
    scanf("%d", &a[i].avg_salary);
}

int max=0,i;
for(i=0; i<3; i++){
    if (max<a[i].avg_salary){
        max=a[i].avg_salary;
    }
}

printf("max=%d",max);
return 0;
}
