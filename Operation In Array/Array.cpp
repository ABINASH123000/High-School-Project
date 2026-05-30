//Using Basic Function on Array of C programming
#include<stdio.h>
main(){
    int count=0,ncount, j,avg,min,max,sum=0,a[10],b,i;
    printf("options");
    printf("\n1.find Sum, Average, Min, Max.");
    printf("\n2.Print only even numbers in the array.");
    printf("\n3.Find sum of all odd numbers");
    printf("\n4.print only those number which are prime");
    printf("\nenter your choice");
    scanf("%d",&b);
    printf("enter the value in array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    switch (b){
    case 1:
     for(i=0;i<10;i++)
     {
	 sum=sum+a[i];
       for(j=0;j<10;j++)
       {
        if(a[i]>a[j])
        {
            max=a[i];
        }
        else
        {
            max=a[j];
            a[j]=a[i];
            a[i]=max;
            }
            }
     }
     for(i=0;i<10;i++)
     {
        for(j=0;j<10;j++)
        {
             if(a[j]>a[i])
            {
                min=a[i];
            }
            else
            {
                min=a[j];
                a[i]=a[j];
                a[j]=min;
                }
        }
     }
     avg=sum/10;
     printf("\nthe sum is %d",sum);
     printf("\nthe maxmium number between them is %d",max);
	 printf("\nthe maxmium number between them is %d",min);
	 printf("\nthe average between them is %d",avg);
     break;
    case 2 :
    	for(i=0;i<10;i++)
    	{
    		if(a[i]%2==0)
    		{
			printf("%d",a[i]);
			}
			printf("\n");
		}
		break;
	case 3 :
		for(i=0;i<10;i++)
    	{
    		if(a[i]%2!=0)
    		{
			sum=sum+a[i];
			}
			
		}
		printf("sum of all odd numbers %d",sum);
		break;
	case 4 :
		printf("prime number are");
		for(i=0;i<10;i++)
		{
			count=0;
          for(j=2;j<a[i];j++)
          {
		  
         if(a[i]%j==0)
            {
			 count=1;
			 break;
            }
         }
           if(count==0)
           {
            printf("\t %d",a[i]);
           }
	
		}
		break;
		
    	
}
return 0;
}
