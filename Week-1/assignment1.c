
/*1. Write a program to print the numbers from 1 to 100, but replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible by both print "FizzBuzz".*/
#include<stdio.h>
int main(){
    int n;
    for(int i = 1; i<=100;i++){
        if(i%3==0 && i%5==0) printf("FizzBuzz\n");
        else if(i%3==0) printf("Fizz\n");
        else if(i%5==0) printf("Buzz\n");
        else printf("%d\n",i);
        
    }
    /*2. Write a C++ program to input 3 sides of triangle and a triangle can be drawn from it or not, if triangle can be drawn then check if it is equilateral, isosceles or scalene triangle.*/
    int a;
    int b;
    int c;
    printf("enter three sides of a triangle");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b){
        printf("triangle can be drawn\n");
        if (a==b&&b==c) 
        printf("equilateral triangle");
        else if(a==b || b==c || a==c)
        printf("isosceles triangle");
        else
        printf("scalene triangle");

    }
    
    else 
    printf("tringle can not be drawn\n");
/*3. Write a C++ program to find the largest digit in a number.
*/
    int num;
    int f;
    int f1=0;
    printf("\nenter the number");
    scanf("%d",&num);
    if(num%10==0) num=num+1;
    while(num>0){
        f=num%10;
        if(f>f1){
            f1=f;
        } 
        num=num/10;
        
    }
    printf("the largest digit is %d",f1);  
    /*4. Write a C++ program to input a decimal number and convert it into binary and octal number system using loops.
*/
    int number;
    printf("\nenter decimal number ");
    scanf("%d",&number);
    int number2;
    number2 = number;
    int arr[number];
    int f2;
    int i=0;
    while(number>0){
        f2=number%2;

        arr[i]=f2;
        number=number/2;
        i++;
    }
    printf("the binary of this number is ");
    
    
    
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    number=number2;
    if(number<8)
        printf("\noctal of this number is %d",number);
    else if(number==8)  printf("\noctal of this number is 10");
    else if(number>8){
        int brr[number];
    int f3;
    int i2=0;
    
    
    
    while(number>0){
        f3=number%8;

        brr[i2]=f3;
        number=number/8;
        i2++;
    }
    printf(" the octal of this number is");
    
    for(int j2=i2-1;j2>=0;j2--){
        printf("%d",brr[j2]);
    }
    }
    /*5. Write a C++ program to check if a Number is Perfect square using loops.
*/
    int num2;
    printf("\nenter the number");
    scanf("%d",&num2);
    int y=1;
    for(int i4=1;i<num2;i++){
        if(num2%i==0&&i*i==num2){
            printf("it is a perfect square of %d",i);
            y=0; 
            break;
        }
        

    }
    if(y==1) printf("it is not a perfect square");
    /*6. Write a C++ program to print the pattern
    sample output: for n=3
    for n=3
    123        
    112233
    111222333*/
    int num3;
    printf("\nenter a number");
    scanf("%d",&num3);
    
    for(int i = 1;i<=num3;i++){
        for(int j=1;j<=num3;j++){
            for(int k=0;k<i;k++){
                printf("%d",j);
            }
        }
        printf("\n");

        
    }
/*8. Write a C++ program to print the pattern
sample output: for n=4
1      1 
12    21
123  321
12344321*/
    int n5;
    printf("enter a number");
    scanf("%d",&n5);
    int nsp = 1;
    for(int i = 1; i<=n5;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
            
        }
        for (int k=1;k<=2*(n5-i);k++){
            printf(" ");
            
        }
        for (int l=1;l<=i;l++){
            printf("%d",(nsp+1)-l);
            
            
        }
        nsp++;

        
        printf("\n");
    }
    /*7. Write a C++ program to print the pattern
sample output: for n=3
sample output: for n=4
1*2*3
4*5*6

7*8*9
1*2*3*4
5*6*7*8
9*10*11*12
*/
    int num5;
    printf("enter number");
    scanf("%d",&num5);
    int s=1;
    for(int x=1;x<=num5;x++){
        for(int z = 1;z<=num5;z++){
            printf("%d",s);
            if(z<num5) printf("*");
            s++;

        }
        printf("\n");
    }
    
    return 0;
}