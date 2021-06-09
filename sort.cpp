#include <iostream>
using namespace std;
int max=0,count=0,max1=0;
int n,cho;
int a[20];
int b[20];
int accending();
int deccending();
int main()
{
    cout<<"please enter the number of integers in the array"<<endl;
     cin>>n;

     for(int k=0;k<n;k++){
         cout<<"enter integer number-"<<k+1<<" ";
         cin>>a[k];
     }
     cout<<"Please enter choice"<<endl<<"1-desending"<<endl<<"2-assending"<<endl;
     cin>>cho;
     switch(cho){
         case 1:accending();break;
         case 2:deccending();break;
     }

}
int accending(){
    cout<<"The dessending order is :";
    int max=0,count=0,max1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
                max1=a[j];
                count=j;

            }

        }
         max=0;
         b[i]=max1;
         cout<<b[i]<<" ";
         a[count]=0;

   }
}
int deccending(){
    cout<<"The assending order is :";
    int max=0,count=0,max1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max>a[j])
            {
                max=a[j];
                max1=a[j];
                count=j;

            }

        }
         max=0;
         b[i]=max1;
         cout<<b[i]<<" ";
         a[count]=0;

   }
}
