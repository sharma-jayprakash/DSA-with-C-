// wap to print star 
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include <iostream>
// using namespace std; 
// int main()
// {
//     int i ,n,j; 
//     cout<<"enter the number :"; 
//     cin>>n;
//     for (i =1 ; i <= n ; i ++)
// {
//         for (j= 1 ; j <= n ; j ++)
//         cout <<"*"<<" "; 
//         cout<<endl ; 
//         }
            
// }








// wap to print this star format

// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

// #include <iostream>
// using namespace std; 
// int main ()
// {
//     int i , j, n ;
//         cout <<"enter the number :";  
//             cin>> n ;
//                 for (i = 1 ; i<= n ; i ++)
//                     {
//                         for (j = 1 ; j <= n ; j++)
//                             cout <<"10 ";
//                             cout<<endl ;
//                     }
// }




//kud dhek le bhaya itna time ni ha 
// wap to print this format
// 11111
// 22222
// 33333
// 44444
// 55555

// #include <iostream>
// using namespace std; 
// int main()
// {
//     int i , j , n ; 
//     cout<<"enter the number :";
//     cin>>n; 
//     for (i = 1 ; i <= n ; i ++)
//     {
//         for (j = 1 ; j <=n ; j++)
//         {cout <<j ; 
        
//     }
// cout<<endl ; 
// }
// }



// wap to print reverse number in star format 

// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 


// #include <iostream>
// using namespace std; 
// int main()
// {
//     int i , j  , n ;
//     cout<<"enter the number :"; 
//     cin >>n ;

// for (i = 1 ; i <=n ; i ++)
// {
//     for (j = n  ; j >=1; j--)
//     {
//         cout<<j ; 
//     }
//     cout<<endl;
// }
// }




// wap to print this star format
// 12345
// 23456
// 34567
// 45678
// 56789


// #include <iostream>
// using namespace std; 
// int main ()
// {
//     int i , j , n ;
//     cout<<"enter the number:"; 
//     cin >>n ; 
    
//     for(i = 1 ; i <= n ; i ++)
//     {
//         for (j = 1; j <= n ; j ++)
//         { 
//             cout<<j+(i-1); 
//         }
//         cout<<endl; 
//     }
//         }



// wap to print these star format 
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 


// #include <iostream>
// using namespace std; 
// int main ()
// {
    // int i,j, n ;                              
    // int count = 1;  
    // cout <<"enter the number:"; 
    // cin >>n ; 

    // for (i = 1 ; i <= n ; i ++)
    // {
    //     for (j=1 ; j<=n ; j++)
    //     {cout<<count<<" ";
    //     count = count+1;
    // }
    // cout<<endl;
    // }




//     int row , col ; 
//     for(row = 1 ; row <=5; row ++)
//     {
//         for (col = 1; col <=5 ; col ++)
//         {
//             cout<<(row-1)*5+col <<" "; 

//         }
//         cout<<endl ; 
//     }
// }


#include <iostream>
using namespace std; 
int main ()
{
    int i ,j,n;
    int count =4 ;
    cout<<"enter the number :"; 
    cin>>n ;

    for(i =1; i <=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        cout<<n-(i-1)<<" ";
    cout<<endl;
    }
    
}