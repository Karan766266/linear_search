linear_search(int a[],int s,int r)
{
     for(i=0;i<r;i++)
    {
        if(s==a[i])
        {
           printf("Number is found at position %d",i+1);
        break;
        }

    }
    if(i==r)
    {
        printf("Number is not found");
    }

}

void main()
{
    int a[10],r,i,s;
    printf("Enter a range:");
    scanf("%d",&r);
    printf("Enter %d numbers:",r);
    for(i=0;i<r;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter a number you want to search:");
    scanf("%d",&s);
    linear_search(s,r,a);


getch();
}
