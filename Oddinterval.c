void main()
{
int n,q,num;
clrscr();
printf("Enter any two number(intervals):");
scanf("%d%d",&n,&q);
if((n<=100000)&&(q<=100000))
{printf("odd numbers between %d and %d are=",n,q);
for(num=n+1;num<q;num++)
{
if(num%2==1)printf("\t%d",num);}
}
else
{
printf("Out of Range");
}
getch();
}
