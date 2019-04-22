#include <stdio.h>
#include "sort.h"

void select_sort(int a[], int n)
{
    printf("Selective Sort...\n");
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[index]>a[j])
            {
                index=j;
            }
        }
        //exchange a[i] and a[index]
        int tmp=a[i];
        a[i]=a[index];
        a[index]=tmp;
    }
}

void bubble_sort(int a[],int n)
{
    printf("Bubble Sort...\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            if(a[j]>a[j+1])//exchage a[j] and a[j+1]
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}

void insert_sort(int a[],int n)
{
    printf("Insert Sort...\n");
    for(int i=1;i<n;i++)
    {
        int tmp=a[i];
        int j=i-1;
        for( ;j>=0;j--)
        {
            if(a[j]>tmp)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=tmp; // Insert
    }
}

void insert_sort_with_increment(int a[],int n,int k)
{
    for(int i=k;i<n;i=i+k)
    {
        int tmp=a[i];
        int j=i-k;
        for( ;j>=0;j=j-k)
        {
            if(a[j]>tmp)
            {
                a[j+k]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+k]=tmp; // Insert
    }
}

void shell_sort(int a[],int n)
{
    printf("Shell Sort...\n");
    int h=1;
    while(h<=n)
    {
        h=3*h+1;
    } 
    while(h>0) 
    {
        h=(h-1)/3;
        for(int i=0;i<h;i++)
        {
            // insert sort for a[i:h:n]
            insert_sort_with_increment(a+i,n-i,h);
        }
    }    
}

void print(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%.2d ",a[i]);
    }
    printf("\n");
}
