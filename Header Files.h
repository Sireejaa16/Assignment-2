#include<stdio.h>
#define M 50
void merge(int *arr,int start,int mid,int end)
{
	int temp[50];
	int i , j ,k;
	i=start;
	j=mid+1;
	k=0;
	while(i<=mid && j<=end)
	{
		if(arr[i]<arr[j])
		{
			temp[k++]=arr[i++];
		}
		else 
		{
			temp[k++]=arr[j++];
		}
	}
	while(i<=mid)
	{
		temp[k++]=arr[i++];
	}
	while(j<=end)
	{
		temp[k++]=arr[j++];
	}

	for(i=start,j=0;i<=end;i++,j++)
	{
		arr[i]=temp[j];
	}
}
void mergesort(int *arr,int start,int end)
{	
	int mid;
	if(start<end)
	{
	
		mid=(start+end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}


}


void ShellSort (int a[],int n)
{
	int i,j,temp;	
	int h=1;
	while(h<n/3)
	
		h=(h*3)+1;
		
		while (h>=1)
		{
			for(i=h;i<n;i++)
			{
				for(j=i;j>=h;j-=h)
				{
					if(a[j]<a[j-h])
					{
						temp = a[j];
						a[j]=a[j-h];
						a[j-h]=temp;
				
					}
				}
			}
		h=h/3;
		}	
	
}

void BubbleSort(int [],int n);
void BubbleSort(int a[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
}

void MatrixInput(int r,int c,int A[r][c])
{
	int i,j;
	printf("\nPlease Enter the Matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}

void SelectionSort (int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[min]>a[j])
			{
				temp = a[min];
				a[min]=a[j];
				a[j]=temp;
				
			}
		}
	}

}

void InsertionSort (int a[],int n)
{
	int i,j,temp;	
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				temp = a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				
			}
		}
	}

}



































