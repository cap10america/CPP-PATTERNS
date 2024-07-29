# include<bits/stdc++.h>

using namespace std ;
void pattern1( int n)
{
   for(int i =0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         cout<<"*";

      }
      cout<<endl;
   }
}
void pattern2(int n)
{
   for(int i=0;i<n;i++)
   {
      for (int j=0;j<=i;j++)
      {
         cout<<'*';// cout<<j+1; the p -3 swap character with "j" variable 
        
      }
      cout<<endl;
   }
}
void pattern3(int n)
{
   for(int i=0;i<n;i++)
   {
      for (int j=0;j<=i;j++)
      {
          cout<<j+1;// same as p-2 swap the variable "j" with character '*'
        
      }
      cout<<endl;
   }
}
void pattern4(int n )
{
   for(int i=0;i<n;i++)
   {
      for (int j=0;j<=i;j++)
      {
          cout<<i+1;// same as p-2 swap the variable "j" with character '*'
        
      }
      cout<<endl;
   }

}
void pattern5(int n)
{
   for(int i=0;i<n;i++)
   {
      for (int j=0;j<n-i;j++)
      {
         cout<<"*";

      }
      cout<<endl;
   }
}
void pattern6(int n)
{
   for(int i=0;i<n;i++)
   {
      for (int j=0;j<n-i;j++)
      {
         cout<<j+1;

      }
      cout<<endl;
   }
}
void pattern7(int n)
{
   for(int i =0;i<n;i++)
   {
      for(int j=0;j<(2*n-1);j++)
      {
       if (j<=n+i-1&&j>=n-i-1)
       {
         cout<<i;

       }
       else{
         cout<<" ";
       }
      }
      cout<<endl;
   }
}
void pattern8(int n)
{
   for(int i =0;i<n;i++)
   {
      for(int j=0;j<(2*n-1);j++)
      {
       if (j<=n+i-1&&j>=n-i-1)
       {
         cout<<'*';

       }
       else{
         cout<<" ";
       }
      }
      cout<<endl;
   }
}
void pattern9(int n)
{
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<=2*n-1;j++)
      {
         if(j>i&&j<2*n-i)
         {
            cout<<"*";

         }
         else{
            cout<<" ";

         }
        

      } cout<<endl;
   }
}
void pattern10(int n) 
{
pattern8(n);
pattern9(n);

}
void pattern11(int n )
{
   int stars=0;
   for(int i=0;i<(2*n-1);i++)
   {if(i<n){
       stars +=1;
   }
   else{
     stars=  2*n-i-1;
   }

      for(int j=0;j<stars;j++)
      {
         cout<<"*";
      
         }
         cout<<endl;

      }
     cout<<endl;      

      }    
void pattern12(int n)
{ int num=1;
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<=i;j++)
      {
         
         if(num==1)
         {
            num=0;
            
         }
         else{
            num=1;
         }
         cout<<num;
      }
      cout<<endl;
   }

}
void pattern13(int n)
{
   for(int i=1;i<n;i++)
   {
      for(int j=1;j<2*n-1;j++)
      {
          if(j<=i)
          {
              cout<<j;
          }
          else{
          
         if(j+2>=n-i)
         {if((2*n-j)<=i+1)
         {
             
       
             cout<<2*n-j-1;
         }
          
          
          else{
               cout<<"*";
          }
         }
        }
          
       }
      
   cout<<endl;
    
         
    }
    
}
void pattern14(int n)
{
   int count=1;
   for(int i=0;i<=n;i++)
   {
      for(int j=0;j<i;j++)
      {
         cout<<count<<" ";
         count++;
      }
      cout<<endl;
   }
}
void pattern15(int n)
{int ch=65;
   for(int i=0;i<=n;i++)
   {
      for(int j=0;j<i;j++)
      {
         cout<<char(ch+j)<<" ";
      }
      cout<<endl;
   }
}
void pattern16(int n)
{int ch=65;
   for(int i=0;i<=n;i++)
   {
      for(int j=0;j<n-i;j++)
      {
         cout<<char(ch+j)<<" ";
      }
      cout<<endl;
   }
}
void pattern17(int n)
{int ch=65;
   for(int i=0;i<=n;i++)
   {
      for(int j=0;j<n-i;j++)
      {
         cout<<char(ch+i)<<" ";
      }
      cout<<endl;
   }
}
void pattern18(int n)
{int ch=64;
   for(int i=0;i<=n;i++)
   {
      for(int j=0;j<i;j++)
      {
         cout<<char(ch+i)<<" ";
      }
      cout<<endl;
   }
}
void pattern19(int n)
{   for(int i=0;i<n;i++)
{char ch=64;// for printing alphabets ascii value of A is 65so A-1 i.e char 64
    
   for(int j=0;j<=2*n-1;j++)
   {
     
     if(j<=n+i &&  j>=n-i)
     {
         if(j<= n)
         { ch++;
            cout<<ch;
           
         }
         else{
            ch--;
            cout<<ch;
            
         }


     }
       
     
      else{
         cout<<" ";
      }
   }
   cout<<endl;
}

}
void pattern20(int n)
{ char ch=65;

   for(int i=0;i<=n;i++)
   {
      for(int j=n-i;j<=n;j++)
      {  
          

         cout<<char(ch+j);

       

   
      }

      cout<<endl;
      
   }
}
void pattern21(int n)
{
   for (int i=0;i<=2*n-1;i++)
   {
      for(int j=0;j<2*n;j++)
      {
         if(j>=n-i &&  j<n+i )

         {
            if(i>=n && j<=i-n || j>=(2*n-(i-n+1)))
            {
               cout<<'*';
            }
             else{
               cout<<" ";
             } 

         }
         else{
           
           
                 cout<<"*";
         }
       
       
      }
      cout<<endl;
   }
}
void pattern22(int n)
{
   for(int i=0;i<2*n-1;i++)
   {
      for(int j=0;j<=2*n-1;j++)
      {
         if(j<=i || j>=(2*n-(i+1)))
         {if( j<2*n-i-1 || j>=i+1)
         {
            cout<<"*";
         }
         else{
            cout<<" ";
         }
            

         }
         else{
               
            cout<<" ";
         }
      }
      cout<<endl;
   }

}
int main ()
{
   cout<<"\n \tpatterns\n";
   int n;
   cin>>n;
   for (int k=0;k<n;k++)
   {
     cout<<".  .";
   }cout<<endl;
   pattern22(n);
         cout<<endl;
   pattern21(n);
        cout<<endl;
   pattern20(n);
      cout<<endl;
        cout<<endl;
   pattern19(n);
 pattern18(n);
    cout<<endl;
  pattern17(n);
  cout<<endl;
   pattern16(n);
  cout<<endl;
  pattern15(n);
  cout<<endl;
  pattern14(n);
 cout<<endl;
   pattern13(n);
   cout<<endl;
   pattern12(n);
   cout<<endl;
    pattern11(n);
    cout<<endl;
    pattern10(n);
    cout<<endl;
    pattern9(n);
    cout<<endl;
    pattern8(n);
    cout<<endl;
    pattern7(n);
    cout<<endl;
    pattern6(n);
    cout<<endl;
    pattern5(n);
    cout<<endl;
    pattern4(n);
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern2(n);
    cout<<endl;
    pattern1(n);
    cout<<endl;
   

   return 0;
}