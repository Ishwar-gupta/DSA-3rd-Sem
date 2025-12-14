
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
int marks[5];
printf("Enter the elements of an array:\t");
for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);
}
printf("The entered elements are:\n");
for(int i=0;i<5;i++){
    printf("Marks[%d]=%d \n",i,marks[i]);
}
return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int largest_element_of_array(int marks[5],int n){
int largest=0;
largest=marks[0];
for(int i=0;i<n;i++){
    if(marks[i]>largest){
        largest=marks[i];
    }
}
return largest;
}

int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int marks[n];
printf("Enter the value of array:");
for(int i =0 ; i < n ; i++){
    scanf("%d",&marks[i]);
}
largest_element_of_array(marks,n);
int output=largest_element_of_array(marks,n);
printf("The largest element of array:%d\t",output);
return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

void largest_element_of_array(int marks[5],int n){
int largest=0;
largest=marks[0];
for(int i=0;i<n;i++){
    if(marks[i]>largest){
        largest=marks[i];
    }
}
printf("The largest element of array:%d\t",largest);
}

int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int marks[n];
printf("Enter the value of array:");
for(int i =0 ; i < n ; i++){
    scanf("%d",&marks[i]);
}
largest_element_of_array(marks,n);
return 0;
}
*/

/*  Calculating the sum of array.      */

/*#include<stdio.h>
#include<stdlib.h>

void sum_of_array(int emp[],int num); // function declaration
int main(){
int num; //declaring size of array
printf("Enter the total number of array:");
scanf("%d",&num);
int emp[num]; //variable length array
//taking value of salary of employee in array form
printf("Enter the elements of array\n");

for(int i=0;i<num;i++){
    scanf("%d",&emp[i]);
}
//calling the function with correct parameter
sum_of_array(emp,num);

return 0;
}
void sum_of_array(int emp[],int num){
float sum_of_salary=0;
 for(int i=0;i<num;i++){
    sum_of_salary +=emp[i];
 }
 printf("Total sum of salary of employee is %.2f ",sum_of_salary);
}*/


/*     finding the hcf and lcm of two number   */
/*
#include<stdio.h>
#include<stdlib.h>

void hcf_lcm_calculation(int num1,int num2);
int main(){
int num1,num2;

printf("Enter number1 and number2 : ");
scanf("%d %d",&num1,&num2);

hcf_lcm_calculation(num1,num2);

return 0;
}

void hcf_lcm_calculation(int num1,int num2){
    int hcf,lcm;

        for(int i=1;i<num1;i++){
            if(num1%i==0 && num2%i==0){
                hcf=i;
            }
        }
        printf("hcf of %d and %d is %d \n",num1,num2,hcf);

    lcm=(num1*num2)/hcf;
    printf("lcm of %d and %d is %d ",num1,num2,lcm);

}
*/
/* finding smallest element of array       */
/*
#include<stdio.h>

int smallest_element_of_array(int arr[],int size);
int main(){
int size;
//declaring the size of array
printf("Enter the size of array:\t");
scanf("%d",&size);
int arr[size];
//taking the value of array
printf("Enter the element of array:\t");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

int small=smallest_element_of_array(arr,size);
printf("Smallest element of array: %d ",small);
return 0;
}

int smallest_element_of_array(int arr[],int size){
int smallest=0;
smallest=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
}
return smallest;
}
*/
/* finding smallest element of array       */

/*#include<stdio.h>

void smallest_element_of_array(int arr[],int size);
int main(){
int size;
//declaring the size of array
printf("Enter the size of array:\t");
scanf("%d",&size);
int arr[size];
//taking the value of array
printf("Enter the element of array:\t");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

smallest_element_of_array(arr,size);
return 0;
}

void smallest_element_of_array(int arr[],int size){
int smallest=0;
smallest=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
}
printf("Smallest Array element is : %d ",smallest);
}
*/

/*    Sorting the given array in ascending order i.e linear sort*/
/*
#include<stdio.h>

void sorted_element(int arr[],int size){
int temp,i,j;
for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(arr[j]<arr[i]){  //sorting in ascending order
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

printf("Printing the sorted value:\n");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}
int main(){
int size;
//declaring the size of array
printf("Enter the size of array: ");
scanf("%d",&size);

int arr[size];
//taking the value of array using loop
printf("Enter the value of array: ");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
//calling the function with appropriate parameter
sorted_element(arr,size);
}
*/

/*   sorting array in descending order   */

/*

#include<stdio.h>
void sorted_arr_in_descending(int arr[],int size); //function declaration
int main(){
int size;
//declaring the size of array
printf("Enter the size of array: ");
scanf("%d",&size);

int arr[size];
//Taking the value of array
printf("Enter the %d elements of array: ",size);
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

//calling the function
sorted_arr_in_descending(arr,size);
return 0;
}

//full function definition
void sorted_arr_in_descending(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //printing the sorted value in descending order
    printf("The sorted array in descendig order : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
*/

/*       Multi-Dimensional Array    */
/*
#include<stdio.h>

int main(){
int arr[3][3];
printf("Enter the value of multi-D matrix:\n");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("Enter arr[%d][%d]: ",i,j);
        scanf("%d",&arr[i][j]);
    }
}
printf("Displaying (3x3) matrix:\n");
for(int i=0;i<3;i++){
  printf("\n");
    for(int j=0;j<3;j++){
        printf(" %d ",arr[i][j]);
    }
}
return 0;
}
*/

/*  Computing the transpose of (2x3) matrix   */
/*
 #include<stdio.h>

 int main(){
 int rows,cols;
 printf("Enter number of rows: ");
 scanf("%d",&rows);
 printf("Enter number of cols : ");
 scanf("%d",&cols);


 int matrix[rows][cols];
  // declaration of transpose matrix
 int transpose[cols][rows];

 printf("\nTaking input of (%d x %d ) matrix.\n",rows,cols);
 printf("**************************\n");

 for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("Enter matrix[%d][%d]:",i,j);
        scanf("%d",&matrix[i][j]);
    }
 }
 //displaying the entered value of matrix
 printf("\nDisplaying the entered value of (%d x %d) matrix :\n",rows,cols);
 for(int i=0;i<rows;i++){
  printf("\n");
    for(int j=0;j<cols;j++){
        printf("%d \t",matrix[i][j]);
    }
 }

 //computing transpose matrix
 for(int i=0;i<rows;i++){
    for(int j =0;j<cols;j++){
        transpose[j][i]=matrix[i][j];
    }
 }
 //displaying the transpose matrix
 printf("\nThe transpose matrix of (%d x %d ) matrix is:\n",rows,cols);
 for(int i=0;i<cols;i++){
 printf("\n");
    for(int j=0;j<rows;j++){
        printf("%d \t",transpose[i][j]);
    }
 }

 return 0;
 }
*/
/*  sum of two matrices   */
/*
#include<stdio.h>

int main(){

int arr1[2][3],arr2[2][3],sum[2][3];
printf("\n\n Taking value of arr1(2x3):\n\n");
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf(" arr1[%d][%d] : ",i,j);
        scanf("%d",&arr1[i][j]);
    }
}
printf("\n\n Printing arr1(2x3) matrix:\n\n");
for(int i=0;i<2;i++){
   printf("\n");
      for(int j=0;j<3;j++){
        printf("%d\t",arr1[i][j]);
      }
}
printf("\n\n Taking value of arr2(2x3):\n\n");
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf(" arr2[%d][%d] : ",i,j);
        scanf("%d",&arr2[i][j]);
    }
}
printf("\n\n Printing arr2(2x3) matrix:\n\n");
for(int i=0;i<2;i++){
   printf("\n");
      for(int j=0;j<3;j++){
        printf("%d\t",arr2[i][j]);
      }
}

//computing the sum operation of two matrices
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
       sum[i][j]=arr1[i][j]+arr2[i][j];
    }
}
printf("\n\nPrinting the sum of coresponding elements of matrices:\n\n");
for(int i=0;i<2;i++){
   printf("\n");
      for(int j=0;j<3;j++){
        printf("%d\t",sum[i][j]);
      }
}

return 0;
}
*/