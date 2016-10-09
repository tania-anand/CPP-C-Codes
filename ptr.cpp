// to count max no of ones in 2d array using single for loop
#include<iostream>

int main()
{
	// intialising the size of array
int r,c;
cout<<"\nEnter rows for matrix";
cin>>r;
cout<<"\nEnter columns for matrix";
cin>>c;

// intializing the array size with given values which we get from user
int a[r][c];
// for countin rows 
int rc=1;
// variables for storing rows with max no of ones
int max1,maxt1;
// variable count for getting no of ones in array
int count=0;
// variable count1 final variable that store the max no ones in row;
int count1=0;

// intialising ptr variable with array address
int *ptr = (int *)a;

// for loop will work no of times
for(int i=1;i<=r*c;i++)
{
	cout<<"\nEnter the element in row :"<<rc<<endl;
	cin>>*ptr;
	
if(*ptr==1)
{
count++;
}
if(i%c==0)
{
	// for counting n of rows
	rc++;
	maxt1=c/i;
if(count1<count)
{
 count1=count;
 max1=maxt1;
 count=0;
}
else
{
count=0;
}
}
ptr++;

}
cout<<" \nmax no of 1s are in  row "<<max1<<"  and max are "<<count1;

return 0;
}