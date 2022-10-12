#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int f[50], index[50],i, n, st, len, j, c, k, ind,count=0;
    for(i=0;i<50;i++)
    f[i]=0;
    //ask user to enter the index block. This is X block which will refer below
    x:printf("Enter the index block: ");
    //Get input number from user
    scanf("%d",&ind);
    if(f[ind]!=1)
    {
    //Here we can say the index is not allocated previously
    //so show the proper message
    printf("Enter no of blocks needed and no of files for the index %d on the disk : \n", ind);
    scanf("%d",&n);
    }
    else
    {
    //If Index is already allocated then it will show the message
    //For the first this conditional statement wont execute but second time onwards, it may execute based on the
    //Index enterd by user
    printf("%d index is already allocated \n",ind);
    //Her it will again ask user to and will start the process again and will go to the X block
    goto x;         }  //new loop/block : y
    y: count=0;
    // n is the number entered by user so that many times it will fetch the index from user
    for(i=0;i<n;i++)
    {      // ask user to enter the input
        scanf("%d", &index[i]);
        if(f[index[i]]==0)
        count++;
    }
    //Show result based on the user input
    if(count==n)
    {  //show the indexed number
    for(j=0;j<n;j++)
    f[index[j]]=1;
    printf("Allocated\n");
    printf("File Indexed\n");
    for(k=0;k<n;k++)
    printf("%d-------->%d : %d\n",ind,index[k],f[index[k]]);
    }
    else     { //here index in alrady allocated and show this message to end user
    printf("File in the index is already allocated \n");
    printf("Enter another file indexed");
    goto y;     }
    //ask user to start the program again
    printf("Do you want to enter more file(Yes - 1/No - 0)");
    scanf("%d", &c);
    if(c==1)
    goto x;
    else
    exit(0);
    getch();
}
