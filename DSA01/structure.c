

#include <stdio.h>

typedef struct complex {
    int real;
    int img;
} cmplx;

cmplx add(cmplx a, cmplx b) {
    cmplx res;
    res.real = a.real + b.real;
    res.img = a.img + b.img;
    return res;
}

int main() {
    cmplx a, b, sum;

    // taking input of real parts
    printf("Enter the real part of a and b: ");
    scanf("%d %d", &a.real, &b.real);

    // taking input of imaginary parts
    printf("Enter the imaginary part of a and b: ");
    scanf("%d %d", &a.img, &b.img);

    // printing input complex numbers
    printf("\nPrinting the complex numbers:");
    printf("\n a = %d + %di", a.real, a.img);
    printf("\n b = %d + %di", b.real, b.img);

    // adding complex numbers
    sum = add(a, b);

    printf("\n\nThe sum = %d + %di\n", sum.real, sum.img);

    return 0;

}  
#include<stdio.h>
#include<string.h>

struct employee{
char name[50];
float salary;
};
int main(){

int highest_salary=0;
int number;

printf("Enter max number of employee:");
scanf("%d",&number);

struct employee emp[number];


for(int i=0;i<number;i++){
    printf("\n********************************\n");

    printf("Enter details of employee:%d \n",i+1);

    printf("Enter name of the employee:");
    scanf("%s",emp[i].name);
    printf("Enter salary of employee:");
    scanf("%f",&emp[i].salary);
}

    for(int i=1;i<number;i++){

      if(emp[i].salary>emp[highest_salary].salary){
            highest_salary=i;
        }
    }


printf("\nPrinting the details of employee who has max salary.\n");
printf("%-20s | %-10.2f|",emp[highest_salary].name,emp[highest_salary].salary);

return 0;
}




















