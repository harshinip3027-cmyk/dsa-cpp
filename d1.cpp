//vectors
  /*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>  arr ={1,2,2,4,3,3};
    arr.push_back(7);
    arr.pop_back();
    for (int x:arr)
{
    cout<<x<<" ";
}        return 0;
    } */


  /*  //taking input
    #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);

    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}*/


//iterators
#include<iostream>
#include<bits/stdc++.h>
using namespace std;/*
int main()
{
    vector<int> arr={10,20,30,40,50};
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }




    }
    */
   //reversing vector
   
//    int main()
//    {
//     vector<int> v1={10,20,30,40,50};
//     reverse(v1.begin(),v1.end());
//     for (auto it=v1.begin();it!=v1.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//    }
    
   //pair

//    int main()
//    {
//     pair<string, int> p={"harshini",3};
//     cout<<p.first<<endl;


//    }

//min and max element
// int main()
// {
// vector<int> v={23,44,78,31,70};
// cout<<*min_element(v.begin(),v.end());
// }

//ascending
// int main()
// {
//     int count=1;
//  vector<int> v={23,44,78,31,70,23,44,23};
//  sort(v.begin(),v.end());
//  for(int x: v)
//  {
//     cout<<x<<" ";
//  }
// }

// descending
// int main()
// {
//     int count=1;
//  vector<int> v={23,44,78,31,70,23,44,23};
//  sort(v.begin(),v.end(),greater<int>());
//  for(int x: v)
//  {
//     cout<<x<<" ";
//  }
// }

//count frequency
// int main()

// {
//     int arr[]={10,30,50,20,10,30};
//     map<int, int>freq;
//     for(int x: arr)
//     {
//         freq[x]++;
//     }
//     for (auto x:freq)
//     {
//         cout<<x.first<<" -> " << x.second<<endl;
//     }
// }

//find wheather an element exixts in a set

// int main()
// {
//     set<int> s={23,45,33,76,43};
//     if(s.find(24)!=s.end())
//     {
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
// }

//second largest using stl

// int main()
// {

//     vector<int> v={23,67,89,12,56};
//     sort(v.begin(),v.end(),greater<int>());
//     for(int x: v)
//     {
//         cout<<x<<" ";
    
    
//     }
//     cout<<v[1];
// }

//counting numbers
// int main()
// {
//     int n,num=0,c=0;
//     cout<<"enter number";
//     cin>>n;
//     while(n>0)
//     {
//         num=n%10;
//         c+=1;
//         n=n/10;
//     }
//     cout<<"count is"<<c;
// }


//reverse a number
// int main()

// {
//     int n,rev=0,num;
    
//     cout<<"enter number";
//     cin>>n;
    
//     while(n>0)
//     {
//         num=n%10;
//         rev=(rev*10) +num;
//         n=n/10;
//     }
//     cout<<"reverse number is:"<<rev;
// }


//palindrome
// int main()

// {
//     int n,rev=0,num;
    
//     cout<<"enter number";
//     cin>>n;
//      int dup=n;
    
//     while(n>0)
//     {
//         num=n%10;
//         rev=(rev*10) +num;
//         n=n/10;
//     }
//     if(rev==dup)
    
//     cout<<"palindrome";
    
//     else
    
//     cout<<"not";
    
    

    
// }

//armstrong number
// int main()

// {
//     int n,num,sum=0;
    
//     cout<<"enter number";
//     cin>>n;
//      int dup=n;
    
//     while(n>0)
//     {
//         num=n%10;
//         sum= sum+(num*num*num);
//         n=n/10;
//     }
//     if(sum==dup)
    
//     cout<<"yes";
    
//     else
    
//     cout<<"not";
// } 


//printing all divisors
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<endl;
            
//         }
//     }
// }

//divisors(fr tc o(sqrt(n) + o(nlogn)))
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//             if((n/i)!=i)
//             {
//                 cout<<(n/i)<<" ";
//             }
//         }
        
         
//      }
// }
//for sorting use list


//gcd
int main()
{
    int n,m,gdc;
    cin>>n>>m;
    for( int i=1;i<=min(n,m);i++)
    {
        if(n%i==0 && m%i==0)
        {
            gdc=i;
        }
    }
    cout<<"gdc is:"<<gdc;

}
    



    










