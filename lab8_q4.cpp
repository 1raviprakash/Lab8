/*4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each) */

//library
#include<iostream>
using namespace std;

//declaring function for merging the arrays
void merge (int a1[],int y,int a2[],int x,int z[])
{	
    int i;
	//loop for merging the arrays 
    for(i=0;i<y;i++)
    z[i]=a1[i];
    	for(i=y;i<x+y;i++)
        z[i]=a2[i-y];		
	    cout<<"The merged array is"<<endl;
            for(i=0;i<x+y;i++)
            cout<<z[i]<<endl;
}

//declaring function for finding the maximum and minimum of the two arrays
void sort(int a1[],int y)
{	int o,t;
 	
	//loop for arranging the array elements in ascending order(sorting)
 	do
 	{	o=0;
		for(int i=0;i<(y-1);i++)
   		{
   		    if (a1[i]>a1[i+1])
    			{ t=a1[i];
     			  a1[i]=a1[i+1];
    			  a1[i+1]=t;o++;
			}
		}
	}
	while(o!=0);
        cout<<"Maximum of the elements in both the array is "<<a1[y-1]<<endl;
	    cout<<"Minimum of the elements in both the array is "<<a1[0]<<endl;
}

//main function 
int main(){	
    
    //declaring variables
    int a1[10],a2[10],z[20],y,x;
 	
	//How many elements should be in array1
	cout<<"How many elements should be in array1? "<<endl;
 	cin>>y;
 	
	//Enter array elements for array1
	cout<<"Enter array elements for array1"<<endl;
 	for(int i=0;i<y;i++)
  	cin>>a1[i];
 	
	//How many elements should be there in array2
	cout<<"How many elements should be there in array2? "<<endl;
 	cin>>x;
 	
	//Enter array elements for array2
	cout<<"Enter array elements for array2"<<endl;
 	for(int i=0;i<x;i++)
  	cin>>a2[i];
	
	//mergeing arrays
	merge (a1,y,a2,x,z);
	//to find minimum and maximum of the two arrays
	sort(z,(y+x)); 
	
return 0;
}
