#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//number 1
void string()
{
    char a;
    printf("Enter your name= ");
    scanf("%s",&a);
    printf("%s is a good boy\n",&a);
}
//number 2
void jog()
{
    int a,b,c;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    printf("Enter c=");
    scanf("%d",&c);
    int d=a+b+c;
    printf("The sum is = %d\n",d);

}
//number3
void triarea1()
{
    float a,b;
    printf("Enter Base= ");
    scanf("%f",&a);
    printf("Enter hight= ");
    scanf("%f",&b);
    float c=(0.5*a*b);
    printf("%.2f",c);
}
//number 4
void triarea()
{
    float a,b,c,s,area;
    printf("Enter value a,b,c=");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        s=(a+b+c)/2;
        area=sqrt((s*(s-a)*(s-b)*(s-c)));
        printf("the area is %f",area);
    }
    else
        printf("not possible");


}
//number 5
void biggest()
{
    int a,b,c;
    printf("Input 3 number= ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b) && (a>c)){
        printf("a is the biggest number");
    }
    else if ((b>a) && (b>c))
        {
        printf("b is the biggest number");
    }
    else {
        printf("c is the biggest number");
    }

}
//number 6
void prime()
{
    int f,l,i,j;
    printf("Enter two numbers= \n");
    scanf("%d%d",&f,&l);
    for(i=f;i<=l-1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;

            }
        }
            if(i==j)
            {
                printf(" This is your prime num=%d \n",i);
            }


    }

}
//number7
void seris()
{
    int i;
    int sum=0;
    for (i=1;i<=100;i++)
    {
        sum=sum+i;
        printf("%d\n",sum);

    }
}
//number 8
void fibonacci()
{
    int i, n, f = 0, s = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", f);
        nextTerm = f;
    }
}


//number 9
void pattern()
{
    int n,i,j;
    printf("Enter row=");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

int main()
{
    string();//number1
    jog();//number2
    triarea1();//number 3
    triarea();//number 4
    biggest();//number 5
    prime();//number6
    seris();//number7
    fibonacci(); //number 8
    pattern(); //number 9

}
