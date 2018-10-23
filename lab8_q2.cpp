/*Q2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)*/

//include the library
#include<iostream>
using namespace std;

//defining function for finding the mean
void mean(int a[],int n)
{	
    //varible for mean
    int s=0;
	
	//loop for finding the sum
	for (int i=0;i<n;i++)
 	s+=a[i];
	
	//finding mean using float
	float m=float(s)/float(n);
	
	//printint mean 
	cout<<"The mean of the elements of the array is "<< m <<endl;
}
//declaring function for finding median 
void median (int a[],int n){
	int o,t,i,j;
 	
	//loop for arranging the array elements in ascending order 
        //to find the median, we need a sorted array 
 	do{
	o=0;
		for(i=0; i<(n-1); i++)
   		{	if (a[i]>a[i+1])
    			{ t=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=t;
     			  o+=1;
			}
		}
	}while(o!=0);
      
	//print median
	if (n%2==0){
	float m=(float(a[n/2])+float (a[(n/2)-1]))/2;
  		cout<<"The median is = "<<m<<endl;
	}
	else
		cout<<"The median is = "<<a[n/2]<<endl;
}

//declaring function for finding maximum and minimum element of array
void maxormin(int a[],int n)
{
 cout<<"The maximum value in the array is "<< a[n-1] <<endl;
 cout<<"The minimum value in the array is "<< a[0] <<endl;
}

//main function 
int main()
{	int a[10],n;
 	
	//Enter the array limits
	cout<<"How many numbers do you want the array to contain?"<<endl;
 	cin>>n;
 	
	//Enter the array elements
	cout<<"Enter array elements "<<endl;
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	//mean function 
	mean(a,n);
	//median function
	median(a,n);
	//maxmin function 
	maxormin(a,n);
	
	return 0;
}
